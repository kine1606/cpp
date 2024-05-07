#include <iostream>
#define MAXR 100
#define MAXC 100
void NhapMaTran(int a[][MAXC], int &n)
{
    std::cin>> n ;
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j <n; j++)
        {
            std::cin>> a[i][j] ;
        }
    }
}
bool DoiXungQuaDuongCheoChinh(int a[][MAXC], int n)
{
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j <n; j++)
        {
            if(i==j) continue;
            else
                if(a[i][j]!= a[j][i]) return false;
        }
    }
    return true;
}
int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout << std::boolalpha << DoiXungQuaDuongCheoChinh(a, n);
    return 0;
}
