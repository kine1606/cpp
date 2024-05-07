#include <iostream>
using namespace std;
void NhapMang(int *ptr )
{
    for (size_t i = 0; i < 2; i++)
    {
    }
}
int main()
{
    // cấp phát mảng động 2 chiều = 1 con trỏ cấp 2 nắm đầu những thằng con trỏ cấp 1 
    int **ptr ;
    ptr = new int *[3]; // mảng có 3 dòng gồm dòng 0 ptr[0], dòng 1 ptr[1], dòng 2 ptr[2]
    ptr[0]= new int [2];
    ptr[1]= new int [2];
    ptr[2]= new int [2];
    NhapMang(ptr[0]);
    NhapMang(ptr[1]);
    NhapMang(ptr[2]);
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j= 0; j < 2; i++)
        {
            cout << *(ptr[i] +j) << '\n';
        }
    }
}   