#include <iostream>
#include <stack>
#include <queue>

class Test{
    private:
        std::string name;
    public:
        Test(std::string name):
        name(name){

        }
        ~Test(){
            // std::cout << "Destructor called" << std::endl;
        }
        void print(){
            std::cout << name << std::endl;
        }
};

int main(){
    // LIFO
    std::stack<Test> testStack;
    testStack.push(Test("Mike"));
    testStack.push(Test("Nade"));
    testStack.push(Test("Sue"));
    testStack.push(Test("Bob"));

    std::cout << std::endl;
    /*
    Test &test1 = testStack.top();
    testStack.pop();
    test1.print(); // reference(stack returns a refernce) refers to destroyed object here, hence invalid code
    */

   while(testStack.size()>0){
    Test &test = testStack.top();
    test.print();
    testStack.pop();
   }

   std::cout << std::endl;


    // FIFO
    std::queue<Test> testQueue;
    testQueue.push(Test("Mike"));
    testQueue.push(Test("Nade"));
    testQueue.push(Test("Sue"));
    testQueue.push(Test("Bob"));

    std::cout << std::endl;
    /*
    Test &test1 = testQueue.top();
    testQueue.pop();
    test1.print(); // reference(stack returns a refernce) refers to destroyed object here, hence invalid code
    */

   testQueue.back().print();

   std::cout << std::endl;

   while(testQueue.size()>0){
    Test &test = testQueue.front();
    test.print();
    testQueue.pop();
   }


    return 0;
}

// stack is LIFO, queue is FIFO
// we can't iterate through a stack or queue (we can only pop one by one to get to the required element)
// whenever we access the data structures it shallow copies the values and returns a reference to it, \
// we need to store it somewhere and then use it (can be another reference too)


