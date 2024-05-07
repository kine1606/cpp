#include <iostream>
void NhapMang(int *a, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> *(a+i);
    }
}
int timMax(int *a, int n)
{
    int max=a[0];
    for (size_t i = 0; i <n; i++)
    {  
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int max2=max;
    int b[100];
    int index(0);
    for (size_t i = 0; i <n; i++)
    {
        if(max2-a[i]>0)
        {
            b[index++]=a[i];
        }
    }
    int max3=b[0];
    for (size_t i = 0; i <index; i++)
    {
        if(max3<b[i])
        {
            max3=b[i];
        }   
    }
    if(max3==0) return 0;
    return max3;
}
int main()
{
    int n;
    std::cin >> n;
    int *a= new int[n];
    NhapMang(a,n);
    std::cout << timMax(a,n);
}