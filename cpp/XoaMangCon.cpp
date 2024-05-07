#include <iostream>
#define MAX 1000
void NhapMang(int a[], int &n)
{
    std::cin >> n;
    for (size_t i = 0; i <n; i++)
    {
        std::cin >> a[i];
    }
}
void XuatMang (int a[], int n)
{
    for (size_t i = 0; i <n; i++)
    {
        if(a[i]>0)
        std::cout << a[i] << " ";
    }
}
void XoaMangCon(int a[], int &n, int p, int k)
{
    for (size_t i = p; i < p+k; i++)
    {
        a[i]=-1;
    }
}   
int main()
{
    int a[MAX], n;
    NhapMang(a,n);
    int p,k;
    std::cin >> p >> k;
    XoaMangCon(a,n,p,k);
    XuatMang (a,n);
    return 0;
}