#include <iostream>

template<typename T>
void print(T n){
    std::cout << "from template function : " << n << std::endl;
}

void print(int value){
    std::cout << "from non template fn " <<  value << std::endl;
}

template<typename T>
void show(){
    std::cout << T() << std::endl;
}

int main(){

    print<std::string>("hello");
    print(6);
    print<>(6);

    show<double>();

    return 0;
}

// to use the type inference with template function we need to provide "<>" while calling it
// for type inference, we need to have type in the argument list 
// (for show(), since we are not providing type in argument list we can provide the type while calling the function)