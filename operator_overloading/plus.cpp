#include <iostream>
#include "complex_plus.cpp"

using namespace advancedcpp;

int main(){

    Complex c1(3, 4);
    Complex c2(2, 3);

    Complex c3 = c1+c2; // overloaded "+" operator that when used with complex numbers can add then appropriately
    std::cout << c1+c2+c3 << std::endl; // overloaded "<<" operator to print values from objects(Complex object here)

    Complex c4(4, 2);
    Complex c5 = c4 + 7;
    Complex c6 = 3.2 + c4;

    std::cout << c5 << std::endl;
    std::cout << c6 << std::endl;

    std::cout << c1 + 7 + c2 + 3.2 + c4 + 4.44 << std::endl;


    return 0;
}