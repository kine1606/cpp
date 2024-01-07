#include <iostream>
void Xuat(int *a, int N)
{
    for (size_t i = 0; i <N; i++)
        std::cout<< a[i] <<" ";
}
void Nhap(int* &a, int &n)
{
    std::cin>> n ;
    a= new int [n];
    for (size_t i = 0; i <n; i++)
    {
        std::cin>> a[i];
    }
}
void Shorting(int *a, int &n)
{
    for (size_t i = 0; i <n-1; i++)
    {
        int pivot=a[i];
        for (size_t j = i+1; j <=n-1; j++)
        {
            if(pivot==a[j])
            {
                int temp=a[n-1];
                a[n-1]=a[j];
                a[j]=temp;
                n--;
            }
        }
    }
    
}
int main()
{ 
    int *a;
    int n;
    Nhap(a,n);
    std::cout<< "Before short: ";
    std::cout <<'\n';
    Xuat(a,n);
    std::cout<< "After short:" ;
    Shorting(a,n);
    Xuat(a,n);
}