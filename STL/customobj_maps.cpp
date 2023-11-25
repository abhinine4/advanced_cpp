#include <iostream>
#include <map>

class Person{
    private:
        std::string name;
        int age;
    public:
        Person(): name(""), age(0){

        }

        Person(const Person &other){ //copy constructor
            std::cout << "Copy constructor called" << std::endl;
            name = other.name;
            age = other.age;
        }

        Person(std::string name, int age): 
            name(name), age(age){

        }
        void print(){
            std::cout << name << ": " << age << std::endl;
        }
};

int main(){
    std::map<int, Person> people;

    people[50] = Person("Mike", 40);
    people[32] = Person("Sam", 30);
    people[20] = Person("Rose", 20);

    people.insert(std::make_pair( 55, Person("Bob", 45)));
    people.insert(std::make_pair(55, Person("Sue", 24)));

    for(std::map<int, Person>::iterator it=people.begin(); it != people.end(); it++){
        std::cout << it->first << ": ";
        it->second.print();
    }
    
    return 0;

}

// we cannot directly assign objects in maps; (solution , create a default constructor with default values in the object class)
// maps stores data in sorted way
// map shallow copies your instance variables, (it will also copy pointers if declared as member variables)

// copy constructor call???