//
// Created by stein on 11/13/2019.
//

#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H
#include "LinkedList.h"

class Stack: public LinkedList{
public:
    void push_head(Data info);
    bool pop_head();
    Stack();
};
#endif //PROJECT7_STACK_H
