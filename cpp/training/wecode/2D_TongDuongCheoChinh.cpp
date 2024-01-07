#include <iostream>
#define MAXR 1000
#define MAXC 1000
void NhapMaTran(int x[][MAXC], int &nx)
{
    std::cin>>nx;
    for (size_t i = 0; i < nx; i++)
    {
        for (size_t j = 0; j < nx; j++)
        {
            std::cin >> x[i][j];
        }
    }
    return ;
}
int TongDuongCheoChinh(int a[][MAXC], int nx)
{
    int sum(0);
    for (int i = 0; i < nx; i++)
    {
        sum+=a[i][i];
    }
    return sum;
}
int main() 
{
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout << TongDuongCheoChinh(a, n);
    return 0;
}
