#include "Matrix2D.h"
#include <iostream>
int main()
{
    Matrix2D mt1;
    int r1, c1, r2, c2;
    std::cout<< "Enter row and col of matrix1: ";
    std::cin>> r1 >> c1 ;
    mt1.setRow(r1);
    mt1.setColumn(c1);
    std::cout<< "Enter elem of matrix1: " <<'\n';
    std::cin >> mt1;
    Matrix2D mt2(2,2);
    std::cout<< "Enter elem of matrix2: " <<'\n';
    std::cin >> mt2;
    Matrix2D mult = mt1*mt2;
    std::cout<< mult <<'\n';
}