#pragma once 
#include <vector>
#include <iostream>
class Matrix2D
{
private:
    int m_row;
    int m_column;
    std::vector<std::vector<int>> m_matrix;
public:
    Matrix2D();
    Matrix2D(const int&,const int& );
    void setRow(const int&);
    void setColumn(const int&);

    int getRow() const;
    int getColumn() const;
    int get_ValueAtIndex(const int&, const int&) const;
    
    Matrix2D operator+(const Matrix2D&);
    Matrix2D operator-(const Matrix2D&);
    Matrix2D operator*(const Matrix2D&);
    ~Matrix2D();
    // input & output
    friend std::ostream& operator<<(std::ostream& out,const Matrix2D& matrix);
    friend std::istream& operator>>(std::istream& in, Matrix2D& matrix);
};