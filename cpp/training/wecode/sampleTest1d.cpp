#include <iostream>
#include <algorithm>
#define MAXR 100
#define MAXC 100
void NhapMaTran(int a[][MAXC], int &r, int &c)
{
    std::cin>> r >> c ;
    for (size_t i = 0; i <r; i++)
    {
        for (size_t j = 0; j <c; j++)
        {
            std::cin>> a[i][j] ;
        }
    }
}
void TongCacSoLonNhat(int a[][MAXC], int r, int c, int &sum)
{
    int max=a[0][0];
    for (size_t i = 0; i <r; i++)
    {
        for (size_t j = 0; j <c; j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    for (size_t i = 0; i <r; i++)
    {
        for (size_t j = 0; j <c; j++)
        {
            
            if(a[i][j]==max)
            {
                sum+=a[i][j];
            }
        }
    }
    return;
}
int main(){
    int a[MAXR][MAXC], r, c, sum;
    NhapMaTran(a, r, c);
    TongCacSoLonNhat(a, r, c, sum);
    std::cout << sum;
    return 0;
}
