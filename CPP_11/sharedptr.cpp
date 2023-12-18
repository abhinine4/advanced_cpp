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
            std::cout << "Hello" << std::endl;
        }
};

int main(){

    // std::shared_ptr<Test> pTest1(new Test());

    std::shared_ptr<Test> pTest2(nullptr);

    {
    std::shared_ptr<Test> pTest1 = std::make_shared<Test>();
    pTest2 = pTest1;
    auto pTest3 = pTest1;
    }
    
    std::cout << "Finished" << std::endl;
    return 0;
}


// shared ptrs do not delete the objects untill all the shared pointers have gone out of scope