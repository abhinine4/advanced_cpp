#include <iostream>
#include "complex_eq_eq.h"

namespace advancedcpp{

std::ostream &operator<<(std::ostream &out, const Complex &c){
    out << "(" << c.getReal() << "," << c.getImaginary() << ")";
    return out;
}

Complex operator+(const Complex &c1, const Complex &c2){
    return Complex(c1.getReal()+c2.getReal(), c1.getImaginary()+c2.getImaginary());
}

Complex operator+(const Complex &c1, double c){
    return Complex(c1.getReal()+c, c1.getImaginary());
}

Complex operator+(double c, const Complex &c1){
    return Complex(c1.getReal()+c, c1.getImaginary());
}

bool Complex::operator==(const Complex &other) const {
    return (real == other.real) && (imaginary == other.imaginary);
}

bool Complex::operator!=(const Complex &other) const{
    return (real != other.real) || (imaginary != other.imaginary);
}

// constructor
Complex::Complex(): real(0), imaginary(0){

}

Complex::Complex(double real, double imaginary):
    real(real), imaginary(imaginary){

    }

Complex::Complex(const Complex &other){
    // std::cout << "Copy" << std::endl;
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