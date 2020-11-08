//
// Created by ergys on 11/8/2020.
//

#include <iostream>
#include "stack.h"

stack::stack() { // stack constructor
    head = tail = NULL;

}//stack

void stack::push(int d) { // stack push method
    node *temp = new node(d);
    if (head == NULL) { // if head is null then add new head
        head = tail = temp;
        return;
    }
    temp->data = d; // if head is not null link the temp data with the parameter data
    temp->next = head; // link temp to point at head

    head = temp; // make temp as the new head node

}//push

bool stack::isEmpty() { // return true if head is null
    return head == NULL;
}//isEmpty

int stack::top() { // returns the head node
    if (!isEmpty()) // if stack is not empty
        return head->data; // return the data from the head node
    else
        return 0;
}//top

void stack::pop() {// remove the head node
    node *temp;

    // if stack is null
    if (head == NULL) {
        std::cout << "stack is null" << std::endl;
        return;
    } else {

        // link the head node to a temp node
        temp = head;

        // link second node to top
        head = head->next;

        // remove link between
        // first node and second node
        temp->next = NULL;

        // Release memory of top node
        free(temp);
    }//else
}//pop

void stack::print() { // print all elements of the stack
    node *temp = head;
    int i = 0;
    while (temp != NULL) {
        std::cout << "Index: " << i << " " << temp->data << std::endl;
        temp = temp->next;
        i++;
    }//while

}//print

void stack::set(int d,
                int index) { // set() takes an int for index and another int for value and sets the data of the node at the index to the value that was passed as a parameter

    node *temp = head;
    for (int i = 0; i < index; i++) {
        if (temp->next != NULL)
            temp = temp->next;

    }//for
    temp->data = d;
    std::cout << std::endl << "Value at index :" << index << " was set to " << d << std::endl;

}//set
