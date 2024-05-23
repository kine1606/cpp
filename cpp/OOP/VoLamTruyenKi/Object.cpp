#include "Object.h"
#include <string>
#include <iostream>
Object::Object() = default;
void Object::input()
{
    std::cout<< "Nhap lv:";
    std::cin>> m_level ;
    std::cout<< "Nhap ngu hanh: ";
    std::cin>> m_element;
}
