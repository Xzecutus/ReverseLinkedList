#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::reverse() {
    Node* curr = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while (curr != nullptr) {
        // Store next node
        next = curr->getNext();

        // Reverse current node's pointer
        curr->setNext(prev);

        // Move pointers forward
        prev = curr;
        curr = next;
    }
    head = prev; // set head to "end" of list
}

void LinkedList::print() {
    struct Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->getData() << " ";
        temp = temp->getNext();
    }
}

void LinkedList::push(int data) {
    Node* temp = new Node(data);
    temp->setNext(head);
    head = temp;
}
