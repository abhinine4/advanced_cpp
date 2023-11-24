 #include <iostream>
 #include <exception>

 void goWrong(){
    bool err1 = true, err2 = false;

    if(err1){
        throw std::bad_alloc();
    }

    if(err2){
        throw std::exception();
    }

 }

 int main(){
    try{
        goWrong();
    }
    catch(std::exception e){
        std::cout << "Catching exception before bad_alloc : " << e.what() << std::endl;
    }
    catch(std::bad_alloc e){
        std::cout << "Catching bad alloc : " << e.what() << std::endl;
    }
    return 0;
 }


 
 // eg std::bad_alloc is a subclass of std::exception class
 // child cannot expect parent, parent can expect child class exceptions
 // always catch subclasses before catching parent class , first bad_alloc then catch exception IMPORTANT
