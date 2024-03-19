#include "cHocSinh.h"
#include <iostream>
int main()
{
    cHocSinh hs1, hs2;
    hs1.input();
    hs1.output();

    hs2.input();
    hs2.output();
    int xBirth = hs1.compareBirth(hs2);
    if(xBirth ==1)
        std::cout<< "HS1 > HS2" <<'\n';
    else if(xBirth ==-1 ) 
        std::cout<< "HS1 < HS2" <<'\n';
    else 
        std::cout<< "HS1 = HS2" <<'\n';

    int yMark = hs1.compareMark(hs2);
    if(yMark == 1)
        std::cout<< "Diem HS1 > Diem HS2" <<'\n';
    else if(yMark == -1)
        std::cout<< "Diem HS1 < Diem HS2" <<'\n';
    else 
        std::cout<< "Diem HS1 = Diem HS2 " <<'\n';
}