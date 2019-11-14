//
// Created by stein on 11/13/2019.
//

#include "Queue.h"
#include "LinkedList.h"

Queue::Queue() {
    head = nullptr;
    tail = nullptr;
}

bool Queue::dequeue_head() {
    if (head != nullptr) {
        Node* temp = head;
        head = head->next;

        delete(temp);
        return true;
    }
    else{
        return false;
    }
}

void Queue::enqueue_tail(const Data& info) {
    Node * val = new Node(info, nullptr);
    if (head == nullptr){
        tail = val;
        head= val ;

    }
    else{
        tail->next=val;
        tail=val;
    }
}
