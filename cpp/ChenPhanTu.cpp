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
void ChenPhanTu(int a[], int &n)
{
    std::cout << "Nhap phan tu can chen: ";
    int i,t;
    std::cin >> i;
    std::cout << "nhap chi so can chen trong mang:";
    std::cin >> t;
    n++;
    for (size_t i = n-1; i >t; i--)
    {
        a[i]=a[i-1];
    }
    a[t]=i;
}
int main()
{
    int a[100], n;
    NhapMang(a,n);
    ChenPhanTu(a,n);
    XuatMang (a,n);
}