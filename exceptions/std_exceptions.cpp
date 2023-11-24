#include <iostream>

class WrongFunct{
    public:
        void GoWrong(){
            char *pMemory = new char[999999999999999];
            delete [] pMemory;
        }
        
};

int main(){
    try{
        WrongFunct wrong;
    }
    catch(std::bad_alloc &e){
        std::cout <<"caught exception: "<< e.what() << std::endl;

    }
    std::cout << "This is working" << std::endl;
}


// catching memory allocation exceptions in the constructor
// earlier if memory could not be allocated, it returned null (but not after c++, now it throws exception)
// for some reason the intellisense does not allow me to allocate custom memoty in ln:6
// std::exception is the parent class of all exceptions
// we can also build our own exception class by inheriting htis parent class
