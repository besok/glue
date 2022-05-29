#include <iostream>
#include "../Parser.h"


 int main() {
     
    std::stringstream ss;
    ss << R"V0G0N(
            System.print("hello wren")
        )V0G0N"
       << std::endl;

    std::cout << parse(ss.str())->toString() << "\n";


    return 0;
}