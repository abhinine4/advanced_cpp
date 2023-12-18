#include <iostream>

struct Test{
    virtual bool operator()(std::string &text)=0;
    virtual ~Test(){}
};

struct MatchTest : public Test{
    virtual bool operator()(std::string &text) {
        return text == "lion";
    }
};

void check(std::string text, Test &test){
    if(test(text)){
        std::cout << "Text Matches" << std::endl;
    }
    else{
        std::cout << "No match" << std::endl;
    }
}   

int main(){
    // MatchTest pred;
    // std::string value = "lion";
    // std::cout << pred(value) << std::endl;

    MatchTest n;
    check("lion", n);

    return 0;
}



// functor (class or struct) are way of passing functions as parameters, using overloaded operators
// We cannot pass the fucntions directly, we need to pass object of functions here