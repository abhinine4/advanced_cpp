#include <iostream>
#include "ringbuffer.h"

int main(){

    Ring<std::string> ring(4);
    ring.addvalue("One");
    ring.addvalue("two");
    ring.addvalue("three");
    ring.addvalue("four");
    ring.addvalue("five");
    ring.addvalue("six");

    // for(int i=0; i < ring.size(); i++){
    //     std::cout << ring.get(i) << std::endl;
    // }

    for(Ring<std::string>::iterator it=ring.begin(); it != ring.end(); it++){
        std::cout << *it << std::endl;
    }

    std::cout << std::endl;

    for(auto val : ring){
        std::cout << val << std::endl;
    }

    return 0;
}


// to use iterator with ring , we need to override all the opertors that it uses