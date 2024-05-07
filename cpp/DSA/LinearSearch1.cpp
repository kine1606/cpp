#include <iostream>
#define MAXN 10000
void input(int &n, int array[MAXN], int &x)
{
    std::cin>> n ;
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> array[i];
    }
    std::cin>> x ;
}
bool calc(const int& n, int array[MAXN], const int& x, int& flag, int& count)
{
    for (size_t i = 0; i < n; i++)
    {
        count++;
        if(array[i] == x)
        {
            flag = i;
            return true;
        }
    }
    return false;
}
int main()
{
    int n, array[MAXN], x;
    input(n, array, x);
    int count(0);
    int flag(0);
    if(calc(n, array, x, flag, count))
    {
        std::cout<< flag <<'\n';
        std::cout<< count <<'\n';
        std::cout<< n - count <<'\n';
        std::cout<< n - flag <<'\n';
    }
    else
    {
        std::cout<< -1 <<'\n';

    }
    return 0;
}