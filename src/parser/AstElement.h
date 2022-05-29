#ifndef E7DF38D5_C3BB_4343_9546_2F5BA840CD95
#define E7DF38D5_C3BB_4343_9546_2F5BA840CD95

#include <string>

class AstElement {
public:
    virtual std::string toString() const = 0;
};

class DummyAstElement: public AstElement{
    std::string toString() const override  { return "dummy";}
};




#endif /* E7DF38D5_C3BB_4343_9546_2F5BA840CD95 */
