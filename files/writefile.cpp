#include <iostream>
#include <fstream>
#include <string>


int main(){
    std::ofstream outFile;
    
    std::string optFilename = "test.txt";

    outFile.open(optFilename, std::ios::out);

    if(outFile.is_open()){
        outFile << "Hello there" << std::endl;
        outFile << 123 << std::endl;
        for(int i = 10; i>0; i--){
            outFile << i << std::endl;
        }
        outFile.close();
    }
    else{
        std::cout << "Could not create file : " << optFilename << std::endl;
    }
    return 0;
}

// we can use ofstream or fstream (would need to specify std::ios::out/in)
// just the file name will assume the programms working directory (we can also add full file path names)
