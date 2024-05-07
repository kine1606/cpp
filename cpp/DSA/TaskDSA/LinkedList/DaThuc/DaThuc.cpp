#include "DaThuc.h"
#include <iostream>
#include <cmath>

mono::mono(data dt)
{
    this->m_dt.m_coeff = dt.m_coeff;
    this->m_dt.m_deg = dt.m_deg;
    this->pNext = nullptr;
}
bool poli::isEmpty()
{
    if(head == nullptr && tail == nullptr) return true;
    return false;
}
void poli::addTail(mono* new_node)  
{
    if(isEmpty())
    {
        head = tail = new_node; 
    }
    else
    {
        tail->pNext = new_node;
        tail = new_node;
    }
}
poli::poli()
{
    head = tail = nullptr;
}
void poli::printPoli()
{
    std::cout<< "Da thuc vua nhap la: ";
    mono* dummy = head;
    if(dummy->m_dt.m_coeff == 0) dummy = dummy->pNext;
    else
    {
        if(dummy->m_dt.m_deg == 0) 
        {
            std::cout<< dummy->m_dt.m_coeff;
        }
        else std::cout<< dummy->m_dt.m_coeff << "x^" << dummy->m_dt.m_deg; 

        dummy = dummy->pNext;
    } 
    while(dummy != nullptr)
    {
        if(dummy->m_dt.m_coeff == 0) dummy = dummy->pNext;
        else
        {
            if(dummy->m_dt.m_deg == 0) 
            {
                if(dummy->m_dt.m_coeff >0)
                {
                    std::cout<<"+"<<dummy->m_dt.m_coeff ;
                }
                else
                {
                    std::cout << dummy->m_dt.m_coeff ;
                } 
            }
            else if(dummy->m_dt.m_deg == 1)
            {
                if(dummy->m_dt.m_coeff >0)
                {
                    std::cout<<"+"<<dummy->m_dt.m_coeff  << "x";
                }
                else
                {
                    std::cout << dummy->m_dt.m_coeff << "x";
                } 
            }
            else if(dummy->m_dt.m_coeff >0)
                std::cout<<"+"<<dummy->m_dt.m_coeff << "x^" << dummy->m_dt.m_deg; 
            else if(dummy->m_dt.m_coeff <0)
                std::cout<<dummy->m_dt.m_coeff << "x^" << dummy->m_dt.m_deg; 
            dummy = dummy->pNext;
        } 
    }
}
double poli::CalcX(double x)
{
    double sum(0);
    mono* dummy = head;
    while(dummy!= nullptr)
    {
        sum += dummy->m_dt.m_coeff * std::pow(x,dummy->m_dt.m_deg);
        dummy = dummy->pNext;
    }
    return sum;
}