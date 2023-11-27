#include <iostream>
#include "complex_eq_eq.cpp"

using namespace advancedcpp;

int main(){
    Complex c1(3, 2);
    Complex c2(3, 2);

    // if(c1==c2){
    //     std::cout << "Equals" << std::endl;
    // }
    // else{
    //     std::cout << "Not Equals" << std::endl;
    // }

    if(c1!= c2){
        std::cout << "Not Equals" << std::endl;
    }
    else{
        std::cout << "Equals" << std::endl;
    }

    return 0;
}