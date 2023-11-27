#include <iostream>
#include "complex_deref.cpp"

using namespace advancedcpp;

int main(){
    Complex c1(2, 4);

    std::cout << *c1 + *Complex(4, 3) << std::endl;

    return 0;
}

// overloading "*" to work as get conjugate of imaginary parts of complex numbers 

/*
- Conditional or Ternary Operator (?:) cannot be overloaded.
- Size of Operator (sizeof) cannot be overloaded.
- Scope Resolution Operator (::) cannot be overloaded.
- Class member selector Operator (.) cannot be overloaded.
- Member pointer selector Operator (.*) cannot be overloaded.
- Object type Operator (typeid) cannot be overloaded.
*/