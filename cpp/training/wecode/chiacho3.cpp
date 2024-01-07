
#include <iostream>
#include <cmath>
#define MAXN 100
void XuatMang(int *A, const int &N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}
void NhapMang(int array[], int &n)
{
    std::cin >> n;
    for (int i = 0; i <n; i++)
    {
        std::cin >> array[i];
    }
}

bool isPrime(int x)
{
    if (x <= 1)
        return false;

    for (size_t i = 2; i < x; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

void TachMang(int a[], const int n, int b[], int &nb, int c[], int &nc)
{
    nb=nc=0;
    for (int inputIndex = 0; inputIndex <n; inputIndex++)
    {
        if(isPrime(a[inputIndex]))
        {
            b[nb]=a[inputIndex];
            nb++;
        }
        else 
        {
            c[nc]=a[inputIndex];
            nc++;
        }
    }
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