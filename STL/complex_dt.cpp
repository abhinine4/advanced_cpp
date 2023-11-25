#include <iostream>
#include <map>
#include <vector>


int main(){

    std::map<std::string, std::vector<int> > scores;

    scores["Mike"].push_back(10);
    scores["Mike"].push_back(20);
    scores["Vic"].push_back(30);

    for(auto it=scores.begin(); it != scores.end(); it++){
        std::string name = it->first;
        std::vector<int> scorelist = it->second;

        std::cout << name << ": " << std::flush;

        for(int i=0; i < scorelist.size(); i++){
            std::cout << scorelist[i] << " " << std::flush;
        }

        std::cout << std::endl;
    }


    return 0;
}

// we can nest any number of DS to create a complex DS