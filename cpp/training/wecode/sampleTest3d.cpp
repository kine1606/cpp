#include <iostream>
#define MAXR 1000
#define MAXC 1000
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
bool isMaTranDoiXung(int a[][MAXC], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i]) return false; 
        }
    }   
    return true;
}
int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout << std::boolalpha << isMaTranDoiXung(a, n);
    return 0;
}
