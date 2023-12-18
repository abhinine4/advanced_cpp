#include <iostream>

template<class T>
class Test{
    private:
        T obj;

    public:
        Test(T obj){
            this->obj = obj;
        }

        void print(){
            std::cout << obj << std::endl;
        }
};

int main(){
    Test<std::string> test1("Hello");
    test1.print();

    return 0;
}

// all templates are usually declared in header files (not in cpp)
// we can decalre these in other file names too , eg .tpp , which wont be compiled and only be included while compiling
// template classes can be used to define classes which can take variable T type parameters
