#include <iostream>

template<typename T>
void print(T n){
    std::cout << n << std::endl;
}

int main(){
    print<std::string>("Hello");
    print<int>(5);

    print("Hi there");


    return 0;
}

// we can use typename or class while defining the templates
// C++ also performs type inference (we do not explicitely need to mention the type while calling the template function)