#include <iostream>
#include <fstream>
#include <string>
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "SortedLinkedList.h"
using namespace std;

int main() {


    Stack list;
    Queue queue;
    SortedLinkedList linkedList;

    ifstream in;
    ofstream stacked;
    ofstream queued;
    ofstream sorted;
    //Open Files
    in.open("2012_SAT_Results.csv");
    stacked.open("Stack.txt");
    queued.open("Queue.txt");
    sorted.open("Sort.txt");
    //Check if files are open
    if (!in.is_open()) {
        cout << "input failed to open" << endl;
        return -1;
    }
    if (!stacked.is_open()) {
        cout << "stack failed to open" << endl;
        return -1;
    }
    if (!queued.is_open()) {
        cout << "queue failed to open" << endl;
        return -1;
    }
    if (!sorted.is_open()) {
        cout << "sort failed to open" << endl;
        return -1;
    }
    string name, count, read, math, write;
    //input csv file header
    getline(in, name, ',');
    getline(in, count, ',');
    getline(in, read, ',');
    getline(in, math, ',');
    getline(in, write);
    //input csv file data until end is reached
    while (!in.eof()) {

        getline(in, name, ',');
        getline(in, count, ',');
        getline(in, read, ',');
        getline(in, math, ',');
        getline(in, write);

        //create object
        Data object (name, stoi(count), stoi(read), stoi(math), stoi(write));
        //execute push_head, enqueue_tail, and linkedList functions
        list.push_head(object);
        queue.enqueue_tail(object);
        linkedList.insertSorted(object);
    }
    //print stack, queue, and sorted list to txt files
    list.print(stacked);
    queue.print(queued);
    linkedList.print(sorted);

    while (list.pop_head()) {

    }

    while (queue.dequeue_head()) {

    }
    //close txt files.
    in.close();
    stacked.close();
    queued.close();
    sorted.close();
    return 0;
}