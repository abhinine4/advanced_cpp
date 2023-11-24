#include <iostream>
#include <exception>

class MyException : public std::exception {
    public:
        virtual const char* what() const throw(){
            return "Something bad happened";
        }
};

class Test{
    public:
        void goWrong(){
            throw MyException();
        }
};

int main(){
    Test test;

    try{
        test.goWrong();
    }
    catch(MyException &e){
        std::cout << e.what() << std::endl;
    }
}

// depreciated ::: dynamic exception specification in functions
// we can specifu the type of error a function from a class can throw eg. throw(std::bad_alloc) or not throw any error by leaving it blank
// here we are inhereting from exception class and overriding the what function