#include <iostream>

class Animal{
    public:
        virtual void run() = 0;
        virtual void speak() = 0;
};

class Dog : public Animal{
    public:
        virtual void speak(){
            std::cout << "Woof !!" << std::endl;
        }
};

class Labrador : public Dog{
    public:
        Labrador (){
            std::cout << "labrabdor constructor called" << std::endl;
        }
        virtual void run(){
            std::cout << "Lab running" << std::endl;
        }
};

void test(Animal &a){
    a.run();
}

int main(){
    // Dog dog;
    // dog.speak();

    Labrador lab;
    lab.speak();
    lab.run();

    Animal *animals[5]; //array of subclasses in a pointer for super class
    animals[0] = &lab;

    animals[0]->speak();

    test(lab);

    return 0;
}

// abstract class have no implementations and cannot be instantiated (cannot run its constructor) , they have pure virtual methods
// pure virtualmethods is represented by adding "fn() = 0 " (all of these have to be implemented in base classes)
// we need to implement all virtual functions to instantiate the Dog class

// we can have pointer to Animal (but again , not instantiate Animal)