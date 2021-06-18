#include "Node.h"

Node::Node(int data) {
    this->data = data;
    next = nullptr;
}

Node* Node::getNext() { return next; }
void Node::setNext(Node* _next) { next = _next; }
int Node::getData() { return data; }
void Node::setData(int _data) { data = _data; }