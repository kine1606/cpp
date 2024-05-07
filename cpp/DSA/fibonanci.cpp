#include <iostream>
#define MAXN 100000
long long fibonacci(long long n, long long array[MAXN])
{
    if(array[n]) return array[n]; // big shot there ... 
    if(n<=2) return 1;
    array[n] = fibonacci(n-1, array) + fibonacci(n-2, array);
    return array[n];
}
int main()
{
    long long n, array[MAXN];
    std::cin>> n ;
    std::cout << fibonacci(n, array);
}
