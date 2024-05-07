#include <iostream>
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
        std::cout << a[i] << " ";
    }
    
}
void XoaPhanTu(int a[], int &n)
{
    int t;
    std::cout << "nhap chi so can xoa trong mang:";
    std::cin >> t;
    for (size_t i = t; i <n-1; i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
int main()
{
    int a[100], n;
    NhapMang(a,n);
    XoaPhanTu(a,n);
    XuatMang (a,n);
}