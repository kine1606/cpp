#include "Matrix2D.h"
#include <iostream>
Matrix2D::Matrix2D():m_row(0),m_column(0){};
Matrix2D::Matrix2D(const int& row,const int& column):m_row(row),m_column(column){};
Matrix2D::~Matrix2D(){};
Matrix2D Matrix2D::operator+(const Matrix2D& x)
{
    Matrix2D sum;
    if(m_row == x.m_row && m_column == x.m_column)
    {  
        sum.m_column = m_column;
        sum.m_row = m_row;
        for (size_t i = 0; i < m_row; i++)
        {
            std::vector<int> temp;
            for (size_t j = 0; j < m_column; j++)
            {
                temp.push_back(get_ValueAtIndex(i, j) + x.get_ValueAtIndex(i, j));
            }
            sum.m_matrix.push_back(temp);
        }
    }
    else
    {
        std::cout<< "Can't do + " <<'\n';
        return sum;
    }
    return sum;
}
Matrix2D Matrix2D::operator-(const Matrix2D& x)
{
    Matrix2D diff;
    if(m_row == x.m_row && m_column == x.m_column)
    {  
        diff.m_column = m_column;
        diff.m_row = m_row;
        for (size_t i = 0; i < m_row; i++)
        {
            std::vector<int> temp;
            for (size_t j = 0; j < m_column; j++)
            {
                temp.push_back(get_ValueAtIndex(i, j) - x.get_ValueAtIndex(i, j));
            }
            diff.m_matrix.push_back(temp);
        }
    }
    else 
    {
        std::cout<< "Can't do - " <<'\n';
        return diff;
    }
    return diff;
}
Matrix2D Matrix2D::operator*(const Matrix2D& x)
{
    Matrix2D mult;
    if(m_row == x.m_column && m_column == x.m_row)
    {
        int L = x.m_row;
        mult.m_row = m_row;
        mult.m_column =x.m_column;
        for (size_t i = 0; i < mult.m_row; i++)
        {
            std::vector<int> temp;
            for (size_t j = 0; j < mult.m_column; j++)
            {
                for (size_t k = 0; k < L; k++)
                {
                    int score;
                    score = get_ValueAtIndex(i, k) + x.get_ValueAtIndex(k, j);
                    temp.push_back(score);
                }
            }
            mult.m_matrix.push_back(temp);
        }
    }
    return mult;
}
void Matrix2D::setRow(const int& r){m_row = r;}
void Matrix2D::setColumn(const int& c){m_column = c;}

int Matrix2D::getRow() const{return m_row;}
int Matrix2D::getColumn() const {return m_column;}
int Matrix2D::get_ValueAtIndex(const int& i, const int& j) const 
{
    return m_matrix[i][j];
}
std::ostream& operator<<(std::ostream& out, const Matrix2D& x)
{
    for (size_t i = 0; i < x.getRow(); i++)
    {
        for (size_t j = 0; j < x.getColumn(); j++)
        {
            int temp = x.get_ValueAtIndex(i, j);
            out << temp << " ";
        }
        out << '\n';
    }
    return out;
}
std::istream& operator>>(std::istream& in, Matrix2D& x)
{
    for (size_t i = 0; i < x.getRow(); i++)
    {
        std::vector<int> temp;
        for (size_t i = 0; i < x.getColumn(); i++)
        {
            int tempX;
            in >> tempX;
            temp.push_back(tempX);
        }
        x.m_matrix.push_back(temp);
    }
    return in;
}
