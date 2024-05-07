#include "BigInt.h"
#include <iostream>
#include <string>
int main()
{
    LinkedList list;
    std::string first, second;
    first ="1234798126457861345327456";
    second = "17456923478562349785236485";
    Node* first_node = new Node(first);
    Node* second_node = new Node(second);
    list.addHead(first_node);
    list.addHead(second_node);
    list.printList();
}