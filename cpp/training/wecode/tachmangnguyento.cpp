
#include <iostream>
#include <cmath>
#define MAXN 100
void XuatMang(int *A, const int &N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}
void NhapMang(int x[], int &nx)
{
    std::cin>> nx;
    for (int i = 0; i < nx; i++)
    {
        std::cin >> x[i];
    }
    return ;
}
bool isPrime(int a)
{
    if( a<2 ) return false;
    for (size_t i =2 ; i <= sqrt(a); i++)
    {
        if (a%i==0)
        {
            return false;
        }
    }
    return true;
}
void TachMang(int a[], int na, int b[], int &nb, int c[], int &nc)
{
    nb=0;
    nc=0;
    for (size_t i = 0; i < na; i++)
    {
        if(isPrime(a[i]))
        {
            b[nb]=a[i];
            nb++;
        }
        else 
        {
            c[nc]=a[i];
            nc++;
        }
    }
    return;
}
int main() {
    int a[MAXN], na, b[MAXN], nb, c[MAXN], nc;
    NhapMang(a, na);
    TachMang(a, na, b, nb, c, nc);

    XuatMang(a, na); std::cout << std::endl;
    XuatMang(b, nb); std::cout << std::endl;
    XuatMang(c, nc); std::cout << std::endl;

    return 0;
}
