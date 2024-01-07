#include <iostream>
int Nhap(int *&a, int &n)
{
    std::cin>> n ;
    a= new int[n];
    int sum(0);
    for (size_t i = 0; i <n; i++)
    {
        std::cin>> a[i];
        sum+=a[i];
    }
    return sum;
}
void xoaPhanTu(int *a, int &n, int p)
{
    for (size_t i = p; i <n-1; i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void xenKe(int *a, int n)
{
    int *b= new int[n];
    int *c= new int [n];
    for (size_t i = 0; i < n-(n/2); i++) // 0 1 2
    {
        b[i]=a[i];
    }
    int index(0);
    for (size_t i = (n%2==0)? n/2 : n/2+1; i < n; i++)   // 3 4 5
    {
        c[index++]=a[i];
    }
    int count1(0);
    int count2(0);
    for (size_t i = 0; i <n; i++)
    {
        if(i%2==0)   a[i]=b[count1++];
        else    a[i]=c[count2++];
    }
}
int main()
{ 
    int n;
    int *a;
    std::cout<<Nhap(a,n) <<" is sum of all elements" <<'\n';
    // std::cout<< "before delete: " ;
    // for (size_t i = 0; i < n; i++)
    // {
    //     std::cout<< a[i]  << " ";
    // }
    // int p;
    // std::cout<< "\nenter p:" <<'\n';
    // std::cin>> p;
    // xoaPhanTu(a,n,p);
    // std::cout<< "\nafter delete: ";
    // for (size_t i = 0; i < n; i++)
    // {
    //     std::cout<< a[i]  << " ";
    // }
    xenKe(a,n);
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< a[i]  << " ";
    }
}