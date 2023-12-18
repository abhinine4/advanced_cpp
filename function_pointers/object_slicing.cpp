#include <iostream>

class Parent{
    private:
        int one;
    public:
        Parent(): one(0){

        }

        Parent(const Parent &other): one(0){
            one = other.one;
            std::cout << "Copy parent " << std::endl;
        }

        virtual void print(){
            std::cout << "Parent" << std::endl;
        }

        virtual ~Parent(){

        }      
};

class Child : public Parent{
    private:
        int two;
    public:
        Child(): two(0){

        }
        void print(){
            std::cout << "Child" << std::endl;
        }
};


int main(){
    Child c1;
    Parent &p1 = c1;
    p1.print();

    Parent p2 = Child(); // invoking the copy constructor of the parent class 
    p2.print();

    return 0;
}

// virtual is need to override the functions in the child classes 
// during polymorphism , virtual keyword create a table (vtable) for function pointers and during execution decides what method to be called
// if virtual is not provided in the parent class, the child class function will be called 

// subclasses need to run constructor of the aprent classes to be initialized
// so the parent classes too have default constructors

// Parent class constructors can initialize private variable but the child class cannot access private variables of the parent class 
// and since we are not initializing child class, we cannot initialize members of the child class

// this is object slicing (understant it like some members being cut off while initialization)