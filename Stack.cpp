//
// Created by stein on 11/13/2019.
//

#include "Stack.h"

Stack::Stack() {
    head = nullptr;
}

void Stack::push_head(Data info) {
    Node *headPush = new Node(info, head);
    head = headPush;
}

bool Stack::pop_head() {
    Node* temp = head;
    if(head->next = nullptr){
        return false;
    }
    else{
        head = head->next;
        delete (temp);
        return true;
    }
}
