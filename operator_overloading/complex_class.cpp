#include <iostream>
#include "complex.cpp"

using namespace advancedcpp;

int main(){
    Complex c1(2, 3);
    Complex c2 = c1; // will run copy constructor

    c1 = c2;
    Complex c3;

    c3 = c2;

    // std::cout << c2 << ": " << c3 << std::end;

    std::cout << c1 << std::endl;

    return 0;
}


// to access member variables we are using getters instead of declaring theoverloading function as friend