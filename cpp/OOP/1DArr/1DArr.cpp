#include <algorithm>
#include "1DArr.h"
#include <iostream>
#include <random>
Array1D::Array1D() = default;
void Array1D::input()
{
    do
    {
    std::cout<< "Nhap so phan tu: ";
    std::cin>> m_n ;
    } while (m_n <= 0);
    m_arr = new int [m_n];
    std::cout<< "Nhap phan tu cua mang: ";
    for (size_t i = 0; i < m_n; i++)
    {
        std::cin>> m_arr[i] ;
    }
}
void Array1D::random_generate()
{
    do
    {
        std::cout<< "Nhap so phan tu: ";
        std::cin>> m_n ;
    } while (m_n <= 0);
        m_arr = new int [m_n];
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(-30000, 30000);
    for (size_t i = 0; i < m_n; i++)
    {
        m_arr[i] = dis(gen) / 100 ;
    } 
}
void Array1D::output()
{
    std::cout<< "Phan tu cua mang: " ;
    for (size_t i = 0; i < m_n; i++)
    {
        std::cout<< m_arr[i] << " ";
    }
    std::cout <<'\n';
}
int Array1D::Smallest_odd()
{
    int smallest_Neg = 0;
    for (size_t i = 0; i < m_n; i++)
    {
        if(m_arr[i] % 2 !=0)  
        {
            if(m_arr[i] < smallest_Neg)
            {
                smallest_Neg = m_arr[i];
            }
        }
    }
    return smallest_Neg;
}
int Array1D::Times_appear()
{
    std::cout<< "Nhap phan tu can tim: ";
    int x;
    std::cin>> x ;
    int count(0);
    for (size_t i = 0; i < m_n; i++)
    {
        if(m_arr[i] == x)
        {
            count++;
        }
    }
    return count;
}
bool Array1D::isDecaying()
{
    for (size_t i = 0; i < m_n -1; i++)
    {
        if(m_arr[i] < m_arr[i+1])
        {
            return false;
        }
    }
    return true;   
}
void Array1D::Sorting()
{
    std::sort(m_arr, m_arr + m_n);
}
Array1D::~Array1D()
{
    delete m_arr;
    std::cout<< "END!";
}