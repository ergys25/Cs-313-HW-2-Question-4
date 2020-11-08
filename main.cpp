#include <iostream>
#include "stack.h"

int main() {
    stack s;
    for (int i = 0; i < 10; i++) { // fill the lined stack with 10 random int nodes
        s.push(rand());
    }
    s.print(); // print the stack
    std::cout << std::endl;
    s.set(11, 0); //set the element at index to the value passed as a parameter
    std::cout << std::endl;
    s.print();
    s.set(8, 5);
    std::cout << std::endl;
    s.print();
    s.set(2020, 9);
    std::cout << std::endl;
    s.print();

}
