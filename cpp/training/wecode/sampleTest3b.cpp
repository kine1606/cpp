/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
#define MAXN 1000

void NhapMang(int a[MAXN], int &n)
{
    std::cin>> n ;
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> a[i] ;
    }
}
int DemMangConGiam(int a[MAXN], int n)
{
    int mangCon(0);
    for (size_t i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            while (true)
            {
                i++;
                if(i==n) break;
                if(a[i]<a[i+1]) break;
            }
            mangCon++;
        }
    }
    // 3 6 5 4
    return mangCon;     
}
int main() {
    int a[MAXN], n;
    NhapMang(a, n);
    std::cout << DemMangConGiam(a, n);
    return 0;
}
