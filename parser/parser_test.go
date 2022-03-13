package parser

import "testing"

func TestHello(t *testing.T) {
	dir, err := parseDir("./testdata")
	if err != nil {
		t.Error(err)
	}
	helloFile := dir["main"].Files["testdata\\hello.go"]
	main := helloFile.Scope.Objects["main"].Name
	println(main)
}
