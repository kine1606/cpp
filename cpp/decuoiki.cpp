#include <iostream>
#include <string>
#define MAX 100
void NhapMang(int a[][MAX],unsigned int &n)
{
    std::cin >> n;
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
        }
    }
    return;
}
void XuatMang(int a[][MAX] , int n)
{
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << a[i][j] << "  ";
        }
        std::cout << '\n';
        std::cout << '\n';
    }
}
int PhanTuLonNhat(int a[][MAX], int n)
{
    int max=a[0][0];
     for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(max<a[i][j])
            max=a[i][j];
        }
    }
    return max;
}
int PhanTuNhoNhat(int a[][MAX], int n, unsigned int k)
{
    std::cin >> k;
    int min=a[k][0];
    for (size_t i = 0; i <n; i++)
    {
            if(min>a[k][i])
            min=a[k][i];
    }
    return min;
}
bool KiemTraMTV(int a[][MAX], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j= 0; j < n; j++)
        {
            if (i==j)
            {
                if (a[i][j] !=1)  return false;
            }
            else 
            {
                if (a[i][j]!=0)   return false;
            }
        }
    }
    return true;
}
void Bai2()
{
    int array[MAX][MAX];
    unsigned int n,k;
    NhapMang(array,n);
    XuatMang(array,n);
    std::cout << PhanTuLonNhat(array,n) << '\n';
    std::cout << PhanTuNhoNhat(array,n,k) << "\n";
    if(KiemTraMTV(array,n))    std::cout << "YES";
    else    std::cout << "NO";
}

void Bai1()
{
    unsigned int number;
    std::cin >> number;
    double S(0);
    for (size_t i = 1 ; i <=number; i++)
    {
        int mau=2*i;
        S+= 1.0/mau;
    }
    std::cout << S;
}
int main()
{
    Bai1();
    Bai2();
}