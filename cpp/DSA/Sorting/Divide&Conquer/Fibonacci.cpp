#include <iostream>
#include <algorithm>
#define MAXN 10000
int fibo(int n, int arr[MAXN])
{
    if(n<=2) return 1;
    if(std::binary_search(arr, arr + n, n))
    {
        return arr[n];
    }
    arr[n] = fibo(n-1, arr) + fibo(n-2, arr);
    return arr[n];
}
int main()
{
    int n;
    std::cout<< "Enter n : ";
    std::cin>> n ;
    int arr[MAXN];
    std::cout << fibo(n, arr);                                      

}