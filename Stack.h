//
// Created by 최선필 on 03/02/2019.
//

#ifndef DATA_STRUCTURE_STACK_H
#define DATA_STRUCTURE_STACK_H

#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T *array;
    int top;
    int capacity;
public:
    Stack();
    T pop();
    void push(T node);
    bool isEmpty();
    int getSize();
    ~Stack();
};



#endif //DATA_STRUCTURE_STACK_H
