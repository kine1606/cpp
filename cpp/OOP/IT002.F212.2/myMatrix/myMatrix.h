#pragma once
#include <iostream>
#define MAXN 100
class myMatrix
{
public:
    int m_col;
    int m_row;
    int arr[MAXN][MAXN];
public:
    myMatrix();
    myMatrix(int, int);
    myMatrix operator+(const myMatrix&);
    myMatrix operator-(const myMatrix&);
    myMatrix operator*(const myMatrix&);
    void input();
    void output();
    friend std::istream& operator>> (std::istream& in, myMatrix&);
    friend std::ostream& operator<<(std::ostream& out, const myMatrix&);
    ~myMatrix();
};
