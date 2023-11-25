#include <iostream>
#include <vector>

class Test{
    private:
        int id;
        std::string name;
    public:
        Test(int id, std::string name):
            id(id), name(name){

            }
        void print(){
            std::cout << id << ": " << name << std::endl;
        }

        // bool operator<(const Test &other) const{
        //     return id < other.id;
        // }

        friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b){
    return a.id < b.id;
}

int main(){
    std::vector<Test> tests;

    tests.push_back(Test(3, "Sue"));
    tests.push_back(Test(4, "Raj"));
    tests.push_back(Test(9, "Vic"));
    tests.push_back(Test(5, "Mike"));

    std::sort(tests.begin(), tests.end(), comp);
    // std::sort(tests.begin(), tests.begin()+3, comp);

    for(int i=0; i<tests.size(); i++){
        tests[i].print();
    }

    return 0;
}

// to allow a function access private members of a class we can define the function prototype inside a class and declare it as a friend function
// we can pass our own sorting conditions as functions ln 36 (comp())