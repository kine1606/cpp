#include <iostream>
int finding(int n)
{
    int count(0);
    for (size_t i = 1; i <=n; i++)
        if(n%i==0) count++;
    return count;
}
int foundWay(int n)
{
    int way(0);
    for (size_t i = 1; i <n; i++)
    {
        if(i>=n/2)
        {
            return 2*way;
        }
        way+=finding(i)*finding(n-i);
    }
    return way;
}

int main()
{
    int n;
    std::cin>> n ;
    std::cout << foundWay(n);
}
