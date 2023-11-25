#include <iostream>
#include <map>

int main(){
    std::multimap<int, std::string> lookup;

    lookup.insert(std::make_pair(30, "Mike"));
    lookup.insert(std::make_pair(10, "Vic"));
    lookup.insert(std::make_pair(30, "Raj"));
    lookup.insert(std::make_pair(20, "Bob"));

    for(std::multimap<int, std::string>::iterator it=lookup.begin(); it != lookup.end(); it++){
        std::cout << it->first << ": " << it->second << std::endl;
    }

    std::cout << std::endl; 

    for(std::multimap<int, std::string>::iterator it=lookup.begin(); it != lookup.end(); it++){
        std::cout << it->first << ": " << it->second << std::endl;
    }

    std::cout << std::endl;

    // creating iterators in a given range (first and second)
    std::pair<std::multimap<int, std::string>::iterator, std::multimap<int, std::string>::iterator> its = lookup.equal_range(20);
    
    for(std::multimap<int, std::string>::iterator it=its.first; it != its.second; it++){
        std::cout << it->first << ": " << it->second << std::endl;
    }


    // c++11 style
    std::cout << std::endl;

    auto its2 = lookup.equal_range(30);
    
    for(std::multimap<int, std::string>::iterator it=its2.first; it != its2.second; it++){
        std::cout << it->first << ": " << it->second << std::endl;
    }


    return 0;
}

// lets you store values with duplicate keys
// we can iterate over a range of keys by creating a pair of iterators and iterating over the start and end range 
// we can also bypass the iterator pair init by using auto when using equal_range()
