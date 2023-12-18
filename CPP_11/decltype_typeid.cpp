#include <iostream>
#include <typeinfo>

int main(){

    std::string value;
    // std::cout << typeid(value).name() << std::endl;

    decltype(value) name = "Bob";
    std::cout << typeid(name).name() << std::endl;

    return 0;
}

// to use typeid we need to import typeinfo (else outputs can be different)
// C++ perform name mangling (depends on what compiler you are using) to add more information to some datatypes

//decltype can infer type from different object and we can assign it to new variables

