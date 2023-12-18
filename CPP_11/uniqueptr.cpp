#include <iostream>
#include <memory>

class Test{
    public:
        Test(){
            std::cout << "Constructed" << std::endl;
        }

        ~Test(){
            std::cout << "Destroyed" << std::endl;
        }

        void greet(){
            std::cout << "hello" << std::endl;
        }
};

class Temp{
    private:
        std::unique_ptr<Test[]> pTest;

    public:
        Temp(): pTest(new Test[2]){

        }
};

int main(){

    // std::unique_ptr<Test[]> pTest(new Test[2]);
    // pTest[1].greet();
    Temp temp;
    
    std::cout << "Finished" << std::endl;
    return 0;
}

// destructor is called automatically after the pointer goes out of scope;
// destroyed called after Finished
// incase of arrays , each object is cleaned (destroyer called for each object)