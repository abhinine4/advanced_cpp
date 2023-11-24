#include <iostream>
#include <fstream>

#pragma pack(push, 1)
struct Person{
    char name[50]; //50 bytes
    int age; // 4 bytes
    double weight; // 8 bytes
};
#pragma pack(pop)

int main(){

    Person someone = {"Harry Potter", 28, 72.3};
    // std::cout << sizeof(Person) << std::endl;
    std::string fileName = "test.bin";
    std::ofstream outfile;
    
    //write in a binary file
    outfile.open(fileName, std::ios::binary); 
    if(outfile.is_open()){
        // outfile.write((char *)&someone, sizeof(Person)); // casting Person object to char *
        outfile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

        outfile.close();
    }
    else{
        std::cout << "Could not create file: " + fileName; 
    }
    
    // read from binary file
    Person someonelse = {};

    std::ifstream inputfile;
    inputfile.open(fileName, std::ios::binary);

    if(inputfile.is_open()){
        // inputfile.write((char *)&someone, sizeof(Person)); // casting Person object to char *
        inputfile.read(reinterpret_cast<char *>(&someonelse), sizeof(Person)); // reading data back in a person type struct object

        inputfile.close();
    }
    else{
        std::cout << "Could not create file: " + fileName; 
    }

    std::cout << someonelse.name << ", " << someonelse.age << ", " << someonelse.weight << std::endl;

    return 0;
}


// objects of string class contain pointers, since the values are stores somewhere else
// it uses "new" to allocate memory on heap
// so if we write the std::string we will be writing the pointer and not the actual value pointer by the string object
// cpp pads structs to save memory (add more space), we need to switch it off
// pragma pack is used to set a alignment state (with given boundary)  IMPORTANT
// pragma pack (pop) undos the packing


// binary files do not have eof caharacters