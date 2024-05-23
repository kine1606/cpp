#include "myMatrix.h"
#include <iostream>
#include <vector>
 
myMatrix::myMatrix() = default;
myMatrix::myMatrix(int row, int col) : m_row(row), m_col(col){}
std::istream& operator>>(std::istream& in, myMatrix& x)
{
    std::cout<< "Nhap m: ";
    in >> x.m_row;
    std::cout<< "Nhap n: ";
    in >> x.m_col;
    std::cout<< "Nhap phan tu:" <<'\n';
    for (size_t i = 0; i < x.m_row; i++)
    {
        for (size_t j = 0; j < x.m_col; j++)
        {
            in >> x.arr[i][j];
        }
    }
    return in;
}
std::ostream& operator<<(std::ostream& out, const myMatrix& x)
{
    std::cout<< "Ma tran: " <<'\n';
    for (size_t i = 0; i < x.m_row; i++)
    {
        for (size_t j = 0; j < x.m_col; j++)
        {
            out << x.arr[i][j];
        }
    }
    return out;
}
myMatrix myMatrix::operator+(const myMatrix& rhsMTX)
{
    myMatrix temp;
    temp.m_col = rhsMTX.m_col;
    temp.m_row = rhsMTX.m_row;
    if(temp.m_col != this->m_col || temp.m_row!= this->m_row)
    {
        std::cout<< "Khong cung kich thuoc!" <<'\n';
        return myMatrix(0, 0);
    }
    for (size_t i = 0; i < m_row; i++)
    {
        for (size_t k = 0; k < m_col; k++)
        {
            temp.arr[i][k] = arr[i][k] + rhsMTX.arr[i][k];
        } 
    }
    return temp;
}
myMatrix myMatrix::operator-(const myMatrix& rhsMTX)
{
    myMatrix temp;
    temp.m_col = rhsMTX.m_col;
    temp.m_row = rhsMTX.m_row;
    if(temp.m_col != this->m_col || temp.m_row!= this->m_row)
    {
        std::cout<< "Khong cung kich thuoc!" <<'\n';
        return myMatrix(0, 0);
    }
    for (size_t i = 0; i < m_row; i++)
    {
        for (size_t k = 0; k < m_col; k++)
        {
            temp.arr[i][k] = arr[i][k] - rhsMTX.arr[i][k];
        } 
    }
    return temp;
}
myMatrix myMatrix::operator*(const myMatrix& rhsMTX)
{
    myMatrix temp;
    int iSize = (m_col == rhsMTX.m_row) ? m_col : m_row;
    temp.m_col = iSize;
    temp.m_row = iSize;
    for (size_t i = 0; i < m_row; i++)
    {
        for (size_t k = 0; k < m_col; k++)
        {
            int sum(0);
            for (size_t j = 0; j < m_row; j++)
            {
                sum += arr[i][j] * rhsMTX.arr[j][k];
            }
            temp.arr[i][k] = sum;
        } 
    }
    return temp;
}