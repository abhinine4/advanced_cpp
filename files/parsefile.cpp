#include <iostream>
#include <fstream>

int main(){
    std::ifstream input;
    std::string filename = "stats.txt";

    input.open(filename);
    std::string line;

    if(!input.is_open()){
        return 1;
    }

    while(input){
        
        std::getline(input, line, ':');
        std::string newLine;
        // line.erase(std::remove(line.begin(), line.end(), '\t'), line.end());
        for(char ch : line){
            if(ch != '\t'){
                newLine += ch;
            }
        }
        // std::cout << newLine;

        int pop;
        input >> pop;

        // input.get();
        input >> std::ws; //white space
        if(!input){
            break;
        }
        std::cout << "'" << newLine << "'" << " --- '" << pop << "'" << std::endl;
    }

    input.close();

    return 0;
}

// C++ is not ideal fr parsing text , use other languages instead
// at the end of each line , there is a invisible line terminating character