#include <iostream>
#include <cmath>
#define MAXN 100000
void bai3()
{
    long long L, R;
    std::cin>> L >> R ;
    int index=2;
    int count=0;
    while(true)
    {
        int ahihi=index*index;
        if(ahihi> R ) break;
        if( ahihi<=R && ahihi >=L && ahihi%4==0)
        {
            count++;
        }
        index++;
    } 
    std::cout << count;
}
void bai2()
{
    int n;
    std::cin >> n;
    int a[MAXN];
    for (size_t i = 0; i <n; i++)
    {
        std::cin>> a[i] ;
    }
    long long sum(0);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i+1; j <=n-1; j++)
        {
            sum+= a[i]*a[j];
        }
    }
    std::cout<< sum % 1000000007 <<'\n';
}
int main()
{ 
    {
    int n;
    std::cin >> n;
    int a[MAXN];
    for (size_t i = 0; i <n; i++)
    {
        std::cin>> a[i] ;
    }
    long long sum(0);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j <=n-1; j++)
        {
            sum+= a[i]*a[j];
        }
    }
    std::cout<< sum % 1000000007 <<'\n';
}
}   





//