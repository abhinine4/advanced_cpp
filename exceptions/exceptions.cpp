#include <iostream>

void wrongFunction(){
    bool err1= false, err2 = false, err3 = true;

    if(err1){
        throw "This is a const char type exception";
    }

    if(err2){
        throw 8;
    }

    if(err3){
        throw std::string("This is string exception");
    }
}

int main(){
    try{
        wrongFunction();
    }
    catch(int e){
        std::cout << "Some exception code : " << e << std::endl;
    }

    catch(const char * e){
        std::cout << "Const char exception : " << e << std::endl;
    }

    catch(std::string e){
        std::cout << "string exception : " << e << std::endl;
    }
    return 0;
}

// we need to catch exceptions based on the types
// the execution stop as soon as the first exception is encountered
// we can define multiple catch blocks for this
// exceptions can be called recursively in a call stack