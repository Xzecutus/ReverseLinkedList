#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList list;
    list.push(21);
    list.push(12);
    list.push('*');
    list.push('\r');
    list.push('%');

    std::cout << "Given linked list: ";
    list.print();
    std::cout << std::endl;

    list.reverse();
    
    std::cout << "Reversed linked list: ";
    list.print();
    std::cout << std::endl;
    return 0;
}