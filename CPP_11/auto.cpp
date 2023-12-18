#include <iostream>
#include <typeinfo>

template <class T, class S>
auto test(T value1, S value2) -> decltype(value1 + value2) {
    return value1 + value2;
}

int main(){
    // auto value = 7;
    // auto text = "Hello";
    // std::cout << typeid(text).name() << std::endl;

    std::cout << test(5, 6) << std::endl;

    return 0;
}

// auto can be used for return type of functions
// trailing return types can use functions or expressions with decltypes
// for return types of functions we SHOULD have trailing return types
