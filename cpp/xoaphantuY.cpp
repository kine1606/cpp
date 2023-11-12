#include <iostream>
#define MAX 1000
void NhapMang(int a[], int n)
{
    for (size_t i = 0; i <n; i++)
    {
        std::cin >> a[i];
    }
}
void XuatMang (int *a, int n)
{
    for (size_t i = 0; i <n; i++)
    {
        std::cout << *(a+i) << " ";
    }
}
void XoaPhanTu(int *a, int &n, int y)
{
    int b[MAX];
    int count(0);
    for (size_t i = 0; i <n; i++)
    {
        if(a[i]!=y)
        {
            b[count++]=a[i];
        }
    }
    delete a;
    for (size_t i = 0; i < count; i++)
    {
        a[i]=b[i];
    }
    n=count;
}
int main()
{
    int n;
    std::cin >> n;
    int *a= new int [n];
    NhapMang(a,n);
    int y;
    std::cin >> y;
    XoaPhanTu(a,n,y);
    XuatMang(a,n);
}