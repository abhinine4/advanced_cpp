#include <iostream>
#include <algorithm>


bool match(std::string test){
    return test .size()== 3;
}

int countStrngs(std::vector<std::string> &texts, bool (*match)(std::string)){
    int tally = 0;
    for(int i =0; i < texts.size(); i++){
        if(match(texts[i])){
            tally ++;
        }
    }
    return tally;
}


int main(){
    std::vector<std::string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("two");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("three");

    // std::cout << match("oned") << std::endl;

    // std::cout << std::count_if(texts.begin(), texts.end(), match) << std::endl;

    std::cout << countStrngs(texts, match) << std::endl;

    return 0;

}

// std::count_if uses function pointer(match)
