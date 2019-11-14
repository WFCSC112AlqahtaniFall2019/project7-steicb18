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

    if(head== nullptr){
        return false;
    }
    else{
        Node* temp = head;
        head = head->next;
        delete (temp);
        return true;
    }
}
