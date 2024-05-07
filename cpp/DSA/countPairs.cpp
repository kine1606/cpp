#include <iostream>
#include <algorithm>
void input(int array[100], int &n)
{
    std::cin>> n ;
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> array[i] ;
    }
}
int countPairs(int *array, int n, int *p, int *q)
{
    // target number that sum of 2 elements =k;
    int k;
    std::cin>> k ;
    int count(0);
    while(true)
    {
        if(*p >= *q) break;
        if(*p + *q == k) 
            {
                count++;
                p++;
            }
        if(*p + *q > k) q--;
        if (*p + *q < k) p++;
    }
    return count;
}
int main()
{
    int *p, *q, n, array[100];
    input(array, n);
    std::sort(array, array+n);
    // extremely min and max in array
    p = array;
    q = array +n-1;
    std::cout<<  countPairs(array, n, p, q) <<'\n';
}