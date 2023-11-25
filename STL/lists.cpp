#include <iostream>
#include <list>

int main(){
    std::list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    numbers.push_front(0);

    // std::list<int>::iterator it=numbers.begin();
    // it++;
    // numbers.insert(it, 100);
    // std::cout << "Element :" << *it << std::endl;

    std::list<int>::iterator itt = numbers.begin();
    itt++;
    itt = numbers.erase(itt); // to make it point to the same position
    std::cout << "Element :" << *itt << std::endl;

    std::list<int>::iterator it = numbers.begin();
    while(it != numbers.end()){
        if(*it == 2){
            numbers.insert(it, 1234);
        }

        if(*it == 1){
            it = numbers.erase(it); // alwasys reassign iterator after erasing in list; also we here automatically increment iterator, \
             using i++ only when we are not erasing using iterators
        }
        else{
            it++;
        }
    }
    
    for(std::list<int>::iterator it=numbers.begin(); it != numbers.end(); it++){
        std::cout << *it << std::endl;
    }


    return 0;
}

// with list we can add elements at start or end (like linkedlists)
// it has head, tail and next pointers
// list can only be iterated using an iterator
// we cannot do it+2 , we can only perform --it-- or ++it++
// we can insert or erase elements using an iterator
// but erasing can invalidate the iterator so we need to reset it 