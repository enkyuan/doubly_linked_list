//
// Created by Enkang Yuan on 11/25/23.
//

#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

template<class T>
class DoublyLinkedList {
private:
    template<class Type>
    struct node {
        int data;
        node<T> *next;
        node<T> *prev;
    };

    node<T> *headPtr, *tailPtr;

public:
    int sizeOfList = 1;

    DoublyLinkedList<T>() {
        headPtr = tailPtr = nullptr;
    }

    /*
     * Function purpose:    sets the pointer of current head node to next value in linked-list and points new value to the previous head
     * Parameters:          value of type T
     */
    int getSize() {
        return sizeOfList;
    }

    /*
     * Function purpose:    sets the pointer of current head node to next value in linked-list and points new value to the previous head
     * Parameters:          value of type T
     */
    void insertFirst(T value) {
        auto *temp = new node<T>;
        temp -> data = value;
        temp -> next = nullptr;
        temp -> prev = nullptr;

        if (headPtr == nullptr) {
            headPtr = temp;
            tailPtr = temp;
        } else {
            temp -> next = headPtr;
            headPtr -> prev = temp;
            headPtr = temp;
        }

        sizeOfList++;
    }

    /*
     * Function purpose:    sets
     * Parameters:          value of type T
     */
    void insertLast(T value) {
        auto *temp = new node<T>;
        temp -> data = value;
        temp -> next = nullptr;
        temp -> prev = nullptr;

        if (tailPtr == nullptr) {
            headPtr = temp;
            tailPtr = temp;
        } else {
            temp -> prev = tailPtr;
            tailPtr -> next = temp;
            tailPtr = temp;
        }

        sizeOfList++;
    }


    /*
     * Function purpose:    traverses through linked-list and prints data values of nodes
     * Parameters:          pointer of current node
     */
    void traverseForward() {
        node<T> *temp = headPtr;
        if (headPtr == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        int dataIndex = 0;

        while (temp != nullptr) {
            dataIndex++;
            cout << "Data value of node " << dataIndex << " is: " << temp -> data << endl;
            temp = temp -> next;
        }
    }

    void traverseBackward() {
        node<T> *temp = tailPtr;
        if (tailPtr == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        int dataIndex = 0;

        while (temp != nullptr) {
            sizeOfList--;
            cout << "Data value of node " << sizeOfList << " is: " << temp -> data << endl;
            temp = temp -> prev;
        }
    }

    template<class Type> void displayList() {
        node<T> *currentPtr = headPtr;
        while (currentPtr != nullptr) {
            cout << currentPtr -> data << endl;
            currentPtr = currentPtr -> next;
        }

        cout << endl;
    }
};