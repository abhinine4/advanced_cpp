#include <iostream>
#include <map>

int main(){

    std::map<std::string, int> lookup;
    lookup["Mike"] = 40;
    lookup["Sam"] = 30;
    lookup["Rose"] = 20;
    lookup["Abhi"] = 28;

    std::cout << lookup["Mike"] << std::endl;
    lookup.insert(std::pair<std::string, int>("Peter", 100));
    // or
    lookup.insert(std::make_pair("Pam", 200 ));

    //iterator
    for(std::map<std::string, int>::iterator it=lookup.begin(); it != lookup.end(); it++){
        std::cout << it->first << ": " << it->second << std::endl;
    }

    //check values
    if(lookup.find("Mike") != lookup.end()){
        std::cout << "Found Mike" << std::endl;
    }
    else{
        std::cout << "Not Found Mike" << std::endl;
    }
    // std::cout << lookup["Sue"] << std::endl;
    for(std::map<std::string, int>::iterator it=lookup.begin(); it != lookup.end(); it++){
        std::pair<std::string, int> age = *it;
        std::cout << age.first << "--> " << age.second << std::endl;
        
    }

    return 0;
}

// key value pairs
// keys are unique
// for keys which are not in the map, it will return 0
// instead use find which returns an iterator
// std::pair or make_pair can also be use to extract/add the value of a map IMPORTANT