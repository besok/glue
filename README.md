# Glue - simple flow language

 - learning purposes LLVM
 - another view on the control language 

### Components

```

// comment
main(link Id,id num, name string, template Json, array num[]) => (res Json, id num) {
    alt default{
      rules{
          ~ find(id, name) => actual_obj
          ~ process(actual_obj, template)
          ~ handle_error(id) >> (actual_obj,id)
          ~ close() >> (template,id)
      } 
      flow{
          ~ process <- find // can be ommited since it uses res of the find ?
          ~ close <- process OR handle_error
          ~ handle_error <- _(error) // find(error) OR process(error)
      }     
    }
    alt if(@link.name == name){
        rules{
            ~ calibrate(array)
            ~ find(id, name) => actual_obj
            ~ log(actual_obj)
            ~ process(actual_obj, template) => ()
        }
    }
}

// simple rec
calibrate(array num[]){
    alt if(array.len > 0){
        rules{
            ~ take_head(array) => (head,tail)
            ~ calibrate_elem(head)
            ~ calibrate(tail)
        }
    }
}


```