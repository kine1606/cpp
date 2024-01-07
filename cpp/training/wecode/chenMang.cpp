#include <iostream>
#define MAX 100
using namespace std;
void nhap(int a[], int &n)
{
    do
    {
        std::cin>>n;
    }
    while(n<2||n>99);
    for(int i=0; i<n; i++)
    {
        std::cin>>a[i];
    }
}
void xuat(int a[], int n)
{
    for(int i=0; i<n+1 ; i++)
    {
        cout<< a[i] << " " ;
    }
}

void chen(int a[], int n, int x, int k)
{
    int b[MAX];
    for (size_t i = 0; i <k; i++)
    {
        b[i]=a[i];
    }
    b[k]=x;
    for (size_t i = k+1; i < n+1; i++)
    {
        b[i]=a[i-1];
    }
    for (size_t i = 0; i <n+1; i++)
    {
        a[i]=b[i];
    }
}

int main(){
    int a[MAX];
    int n, x,k;
    nhap(a,n);
    std::cin>>x;
    std::cin>>k;
    chen(a,n,x,k);
    xuat(a,n);
    return 0;
}