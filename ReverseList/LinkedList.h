#pragma once
#include "Node.h"

class LinkedList
{
    Node* head;

public:
    LinkedList();
    void reverse();
    void print();
    void push(int data);

};

