#include <iostream>

class Test{
    private:
        int id;
        std::string name;
    public:
        Test():
            id(0), name(""){

        }
        Test(int id, std::string name):
            id(id), name(name){

            }
        void print(){
            std::cout << id << ": " << name << std::endl;
        }

        // return type -- reference of object -- operator to overload -- implicit arguments
        const Test &operator=(const Test &other){
            std::cout << "Assignment running" << std::endl;
            id = other.id;
            name = other.name;
            return *this;
        }

        Test(const Test &other){
            std::cout << "Copy constructor running" << std::endl;
            // id = other.id;
            // name = other.name;
            *this = other;
        }

};  

int main(){
    Test test1(10, "Mike");
    std::cout << "Print test1 " << std::flush;
    test1.print();


    Test test2(20, "Bob");
    test2 = test1;
    std::cout << "Print test2 " << std::flush;
    test2.print();

    Test test3;
    // test3 = test2 = test1;
    // test3.print();

    // similar to test3 = test2;
    test3.operator=(test2);
    std::cout << "Print test3 " << std::flush;
    test3.print();

    std::cout << std::endl;
    // copy initialization
    Test test4 = test1;
    test4.print();

    return 0;
}

// C++ provide default implementation for shallow copying when we do test1 = test2;
// but incase we want a deep copy (with feww unique values), we would need to override the object copy implementations (eg "=" operator)

// operator overloading
// step 1. check return type 

// if we use direct "=" the copy constructor is called
// to use the overloaded "=" we also need to overload the copy constructor as well
// check if you need references and const before overloading operators (maybe from original implementation)