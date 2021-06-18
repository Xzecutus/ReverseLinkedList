#pragma once
class Node
{
    int data;
    Node* next;

public:
    Node(int data);
    Node* getNext();
    void setNext(Node* _next);
    int getData();
    void setData(int _data);
};

