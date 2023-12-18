#include <iostream>

void test(void (*pFunc)()){
    pFunc();
}

void testGreet(void (*greet)(std::string)){
    greet("Bob");
}

int main(){
    // auto func = [](){std::cout << "Hello" << std::endl;};
    // func();

    // test(func); 
    // test([](){std::cout << "Hello" << std::endl;});

    // auto pGreet = [](std::string name){std::cout << "Hello " << name << std::endl;};
    // pGreet("Mike");

    // testGreet(pGreet);

    auto pDivide = [](double a, double b)->double{
        if(b == 0.0){
            return 0;
        }
        return a/b;
    };

    std::cout << pDivide(10.0, 5.0) << std::endl;

    return 0;
}

// substitute to functors
// lambdas are functions without names
// we can pass these to other functions
// [] is used to capture variables
// "=" captures all local variable by value, "&" captures all local by references, 
// [=, &b] , captures all local but b with reference