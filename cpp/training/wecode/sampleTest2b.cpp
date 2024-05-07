#include <iostream>
#include <algorithm>
#define MAXN 1000
void XuatMang(int A[], int N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << '\t';
}
int Input()
{
    int x;
    std::cin>> x ;
    return x;
}

void NhapMang(int a[MAXN], int n)
{
    for (size_t i = 0; i <n; i++)
    {
        std::cin>> a[i] ;
    }
}
void SapXepSoChanGiamDan(int a[MAXN], int n)
{
    int b[MAXN];
    // int c[MAXN];
    int ib=0, ic=0;
    // for (size_t i = 0; i < n; i++)
    // {
    //     if(a[i]%2==0) 
    //     {
    //         b[ib++]=a[i];
    //     }
    //     else c[ic++]=a[i];
    // }
    // for (size_t i = 0; i <ib; i++)
    // {
    //     for (size_t j = i+1; j <=ib-1; j++)
    //     {
    //         if(b[i]< b[j])
    //         {
    //             int temp = b[i];
    //             b[i]=b[j];
    //             b[j]=temp;
    //         }
    //     }
    // }
    // ic=0;
    // for (size_t i = 0; i < ib; i++)
    // {
    //     a[i]=b[i];
    // }
    // for (size_t i = ib; i <n; i++)
    // {
    //     a[i]=c[ic++];
    // }
    for (size_t i = 0; i <n; i++)
    {
        if(a[i]%2==0)
        {
            b[ib++]=a[i];
        }
    }
    std::sort(b, b+ib);
    ib--;
    for (size_t i = 0; i <n; i++)
    {
        if(a[i]%2==0)
        {
            a[i]=b[ib--];
        }
    }
    
}
int main() {
    int a[MAXN], n;
    n=Input();
    NhapMang(a, n);
    SapXepSoChanGiamDan(a, n);
    XuatMang(a, n);
    return 0;
}
