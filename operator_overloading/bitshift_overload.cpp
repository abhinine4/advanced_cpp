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

        const Test &operator=(const Test &other){
            id = other.id;
            name = other.name;
            return *this;
        }

        Test(const Test &other){
            *this = other;
        }

        friend std::ostream &operator<<(std::ostream &out, const Test &test){
            out << test.id << ": " << test.name;
            return out;
        }

};


int main(){
    Test test1(10, "Mike");
    Test test2(20, "Bob");
    // test1.print();

     std::cout << test1 << test2 << std::endl; // this throws error , we need to overload "<<" operator too for this to work

    return 0;
}

// associativity - order of execution eg "+" has right to left associativity 1+2+3 -> 3 is added to 2 then 1 is added to the result
// "<<" returns a reference to an ostream
// here we declared a friend function that overloads the "<<"" by setting the left members in out reference (actuat return type of "<<" ostreamå)
// friend methods are functions not part of the class but allowed to access class members