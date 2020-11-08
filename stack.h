//
// Created by ergys on 11/8/2020.
//

#ifndef Q4_STACK_H
#define Q4_STACK_H


#include "node.h"

class stack { // header file

public:
    node *head, *tail;
    int size;

    stack();

    void push(int d);

    bool isEmpty();

    int top();

    void pop();

    void print();

    void set(int d, int index);


};


#endif //Q4_STACK_H
