#include <iostream>
#include <vector>

int main(){
    std::vector<double> numbers(2);
    std::cout << "Size : " << numbers.size() << std::endl;

    int capacity = numbers.capacity();
    std::cout << "Start Capacity :" << capacity << std::endl;

    for(int i=0; i < 10000; i++){
        if(numbers.capacity() != capacity){
            capacity = numbers.capacity();
            std::cout << "Capacity :" << capacity << std::endl;
        }
        numbers.push_back(i);
    }
    numbers.clear();
    // numbers.resize(100);
    numbers.reserve(100000);
    std::cout << "Size :" << numbers.size() << std::endl;
    std::cout << "Final Capacity :" << numbers.capacity() << std::endl;
    return 0;
}

// capacity of vectors increase exponentially (capacity total space in vector, size is the total elements in vector)
// size (resize) vs capacity (reserve)
// clear, resize( does not affect capacity, changes only size), reserve (increase the capacity of vector, but size is not affected)