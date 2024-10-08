#include "../inc/BinaryOptionObject.h"
#include <string>
#include <iostream>
#include <iostream>
BinaryOptionObject::BinaryOptionObject() =default;
BinaryOptionObject::BinaryOptionObject(int ID, int type): m_ID(ID), m_type(type){}
void BinaryOptionObject::input()
{
    std::cin>> m_ID ;
    std::cin>> m_type;
    std::cout << "BinaryOptionObject::output()"; BinaryOptionObject::output();
}
void BinaryOptionObject::output()
{
    std::cout<< m_ID << " " << m_type << " ";
}
BinaryOptionObject::~BinaryOptionObject(){}