#include <iostream>
#include "SinhVien.h"
int main()
{
    SinhVien SV[MAXN];
    int number;
    std::cin>> number ;
    for (size_t i = 0; i < number; i++)
    {
        SV[i].input();
    }
    for (size_t i = 0; i < number; i++)
    {
        SV[i].output();
    }
}