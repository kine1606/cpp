#include "Cattle.h"
#include "Cow.h"
#include "Goat.h"
#include "Sheep.h"
#include <iostream>
int main()
{
    Cattle* ptr;
    Cow cow;
    Goat goat;
    Sheep sheep;
    ptr = &cow;
    ptr->speak();
    std::cout << "Milk: " << ptr->getMilk() << '\n';
    std::cout << "Child count: " <<ptr->getChild() << '\n';
    ptr = &goat;
    ptr->speak();
        std::cout << "Milk: " << ptr->getMilk() << '\n';
    std::cout << "Child count: " <<ptr->getChild() << '\n';
    ptr = &sheep;
    ptr->speak();
        std::cout << "Milk: " << ptr->getMilk() << '\n';
    std::cout << "Child count: " <<ptr->getChild() << '\n';
}