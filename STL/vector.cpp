#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> strings;
    // strings[3] = "dog";

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    // std::cout << strings[3] << std::endl;
    std::cout << strings.size() << std::endl;

    for(int i=0; i < strings.size(); i++){
        std::cout << strings[i] << std::endl;
    }

    std::vector<std::string>::iterator it = strings.begin();
    it++;
    std::cout << *it << std::endl;

    for(std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++){
        std::cout << *it << std::endl;
    }

    std::vector<std::string>::iterator itt = strings.begin();
    itt += 2;

    std::cout << *itt << std::endl;

    return 0;
}

// vector is a resizeable array
// [] is overloaded for vector class , so it works like an array 
// advantage over array -> resizeable (push_back), and automatically handles memory
// we can also assign iterators and move around the vector 

// memory
