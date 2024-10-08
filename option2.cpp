// OPTION 2 - IMPLEMENT STACK
// DO NOT SHARE

#include <cstdint>
#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

// 2. Implement a growable integer stack (without using container libraries like vector, list, etc.) 
//    that satisfies the following requirements:

// `push` adds a given value to the top
// `pop`  returns and removes the value at the top
// `peek` returns the value at the top
// `size` returns the count of values

struct intlist {
    int integer;
    intlist* next;

    intlist(int i, intlist* ptr) : integer(i), next(ptr) {}
};

intlist* prepend(int integer, intlist* next) {
    intlist* newIntlist = new intlist(integer, next);
    return newIntlist;
}

class IntStack {
private:
    intlist* head;
    int sizeOfStack;
public:
    IntStack(int integer) : sizeOfStack(1){
        head = new intlist(integer, nullptr);
    }

    void push(int integer) {
        intlist* newNode = new intlist(integer, head);
        head = newNode;
        sizeOfStack++;
    }

    int pop() {
        if (head == nullptr) {
            std::cout << "stack is empty" <<std::endl;
            return 0;
        }
        int res = head->integer;
        head = head->next;
        sizeOfStack--;
        return res;
    }

    int peek() {
        if (head == nullptr) {
            std::cout << "stack is empty" <<std::endl;
            return 0;
        }
        return head->integer;
    }

    int size() {
        return sizeOfStack;
    }

    void printStack() {
        intlist* tmp = head;
        while (tmp) {
            std::cout << tmp->integer << std::endl;
            tmp = tmp->next;
        }
    }
};

int main() {
    IntStack stack = IntStack(10);
    stack.push(20);
    stack.push(30);
    std::cout << stack.size() << std::endl;
    stack.printStack();
    int topOfStack = stack.peek();
    std::cout << topOfStack <<std::endl;

    stack.pop();
    stack.printStack();
    std::cout << stack.size() << std::endl;
}