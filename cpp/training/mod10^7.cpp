#include <iostream>
#include <cmath>
long long calculate(int *a, int n)
{
    long long sum(0);
    long long modulo = pow(10,9) + 7;
    for (size_t i = 0; i <=n-1; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            sum += (a[i] % modulo) * (a[j] % modulo); 
        }        
    }
    return sum;    
}
int main()
{
    int n;
    std::cin>> n ;
    int *a = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> a[i] ;
    }
    std::cout<< calculate(a,n) <<'\n';
}