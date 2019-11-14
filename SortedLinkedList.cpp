//
// Created by stein on 11/13/2019.
//
#include "SortedLinkedList.h"
#include "LinkedList.h"

void SortedLinkedList::insertSorted(Data info) {      //sorts linked list

    Node* newItem = new Node(info, nullptr); //create new Node

    if (head == nullptr) {
        head = newItem;
    } else {

        Node *current = head;
        Node *previous = nullptr;

        if (current->data > newItem->data) {
            newItem->next = head;
            head = newItem;
            return;
        }
        previous = current;
        current = current->next;
        while (current && newItem->data > current->data) {
            previous = current;
            current = current->next;
        }
        newItem->next = current;
        previous->next = newItem;
    }

}
