#include <iostream>
#include "complex.h"

namespace advancedcpp{

std::ostream &operator<<(std::ostream &out, const Complex &c){
    out << "(" << c.getReal() << "," << c.getImaginary() << ")";
    return out;
}

// constructor
Complex::Complex(): real(0), imaginary(0){

}

Complex::Complex(double real, double imaginary):
    real(real), imaginary(imaginary){

    }

Complex::Complex(const Complex &other){
    std::cout << "Copy" << std::endl;
    real = other.real;
    imaginary = other.imaginary;
}
const Complex &Complex::operator=(const Complex &other){
    real = other.real;
    imaginary = other.imaginary;

    return *this;
}
} /*namespace advancedcpp*/

// member functions need to be accessed using "::", make neccassary changes in "=" operator overlaoding function