#include <iostream>

void test(int val){
    std::cout << "Hello : " << val << std::endl;
}

int main(){
    test(7);
    void (*pTest)(int) = test; // pointer to a function , that takes an int argument
  
    pTest(8);

    return 0;
}

// virtual methods use function pointers (vtable, lookup table for functions)
// "()" are used only when we are calling the function (we can omit this while assigning it to any pointer)