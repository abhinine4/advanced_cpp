#include <iostream>
#include <fstream>

int main(){
    std::string inFileName = "test.txt";

    std::ifstream inFile;

    inFile.open(inFileName);

    if(inFile.is_open()){
        std::string line;
        while(inFile){
            std::getline(inFile, line);
            std::cout << line << std::endl;
        }
        inFile.close();
    }
    else{
        std::cout << "Cannot open file" << std::endl;
    }

}

// inFile.eof() checks for end of file