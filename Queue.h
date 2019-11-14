//
// Created by stein on 11/13/2019.
//

#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H
#include "LinkedList.h"

class Queue: public LinkedList{
public:
    bool dequeue_head();

    void enqueue_tail(const Data& info);

    Queue();
private:

    Node* tail;
};
#endif //PROJECT7_QUEUE_H
