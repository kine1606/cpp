#include <iostream>
#include <vector>
const int MAXN = 1e5;
// int partition (const int& n, int array[MAXN], const int& m, int i)
// {

// }
void calc(const int& n, int array[MAXN], const int& m, int i, int &count)
{
    int neg = n - array[i];
    if(neg > 0) 
    {
        calc(neg, array, m, i, count);
    }
    else if (neg==0)   
    {
        count++;
        calc(neg+1, array, m, ++i, count);
    }
    else 
    {
        calc(neg+1, array, m, ++i, count);
    }
}
int main()
{
    int n, m;
    int array[MAXN];
    std::cout<< "Enter n: ";
    std::cin>> n;
    std::cout<< "Enter m: ";
    std::cin>> m;
    int count(0);
    for (size_t i = 0; i < m; i++)
    {
        array[i] = i;
    }
    calc(n, array, m, 1, count);
    std::cout<< count <<'\n';
}