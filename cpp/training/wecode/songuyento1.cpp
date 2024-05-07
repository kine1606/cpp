#include <iostream>
using namespace std;
void nhap(int a[], int &n)
{
    do
    {
        std::cin>>n;
    }
    while(n<2||n>99);
    for(int i=0; i<n; i++){
        std::cin>>a[i];
    }
}

void xuat(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<"  "<<a[i];
    }
}

bool SNT(int n)
{
    if(n<2)  return false;
    else
    {
        for(int i=2; i<=n/2 ; i++)
        {
            if(n%i==0) return false;
        }
    }
    return true;
}

void insonguyento(int a[], int n) 
{
    int b[100];
    int count(0);
    for(int i=0 ; i<n ; i++)
    {  
        if(SNT(a[i]))
        {
           b[count++]=a[i];
        }   
    }
    if(count)
    {
        for (size_t i = 0; i < count; i++)
        {
            std::cout << b[i] <<" ";
        }
    }
    else std::cout << 0;
}
int main()
{
    int a[100];
    int n;
    nhap(a,n);
    insonguyento(a,n);
    return 0;
}