#include <iostream>
#include <set>

class Test{
    int id;
    std::string name;

    public:
        Test() : id(0), name(""){

        }

        Test(int id, std::string name):
        id(id), name(name){

        }

        void print() const{
            std::cout << id << ": " << name << std::endl;
        } 

        bool operator<(const Test &other) const{
            return name < other.name;
        }
};

int main(){
    std::set<int> numbers;

    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);
    numbers.insert(50);
    numbers.insert(25);
    numbers.insert(10);

    for(std::set<int>::iterator it=numbers.begin(); it != numbers.end(); it++){
        std::cout << *it << std::endl; // * is not dereference, its an overloaded operator
    }
    
    // find an element
    auto itf = numbers.find(30);

    if(itf != numbers.end()){
        std::cout << "Found : " << *itf << std::endl;
    }

    if(numbers.count(30)){ // boolean
        std::cout << "Number Found." << std::endl;
    }

    std::set<Test> tests;

    tests.insert(Test(10, "Mike"));
    tests.insert(Test(20, "Joe"));
    tests.insert(Test(33, "Sue"));
    tests.insert(Test(30, "Sue"));

    for(std::set<Test>::iterator it=tests.begin(); it != tests.end(); it++){
        it->print();
    }

    return 0;
}


// sets store unique elements
// using auto for iterators from henceforth
// also to add objects with similar values (cpp compares the values before storing at backend) we need to overload "<" \
// and provide a add default constructor and default values just like we did in maps   IMPORTANT
// the new value with same values wont be added (it lets the previous value stay as is)