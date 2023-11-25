#include <iostream>
#include <map>

class Person{
    private:
        std::string name;
        int age;
    public:
        Person(): name(""), age(0){

        }

        // Person(const Person &other){ //copy constructor
        //     std::cout << "Copy constructor called" << std::endl;
        //     name = other.name;
        //     age = other.age;
        // }

        Person(std::string name, int age): 
            name(name), age(age){

        }
        void print() const{
            std::cout << name << ": " << age << std::flush;
        }

        bool operator<(const Person &other) const { // operator overloading
            if(name == other.name){
                return age < other.age;
            }else{
                return name < other.name;
            }
            
        } 
};

int main(){
    std::map<Person, int> people;

    people[Person("Mike", 40)] = 40;
    people[Person("Mike", 44)] = 25;
    people[Person("Sam", 30)] = 30;
    people[Person("Rose", 20)] = 20;

    // people.insert(std::make_pair(Person("Bob", 45), 55));
    // people.insert(std::make_pair(Person("Sue", 24), 58));

    for(std::map<Person, int>::iterator it=people.begin(); it != people.end(); it++){
        std::cout << it->second << ": " << std::flush;
        it->first.print();
        std::cout << std::endl;
    }
    
    return 0;

}

// the keys are sorted in backend and the values are returned as const values (hence keys cant be marked as const)
// also, c++ will not know how to compare objects while sorting the keys (we need to implement our own comparison function for object as keys)
// overload comparison "<" operator with const 
// if entering same keys, please check the values are correctly updated (compare other members in that case)