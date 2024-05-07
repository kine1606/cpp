#include <iostream>
#include <vector>
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
void calc(const int& n, int array[MAXN], const int& x, std::vector <int>& index)
{
    int counttttt(0);
    for (size_t i = 0; i < n; i++)
    {
        counttttt++;
        if(array[i] == x)
        {
            index.push_back(i);
        }
    }   
}
int main()
{
    int n, array[MAXN], x;
    std::vector <int> index;
    input(n, array, x);
    calc(n, array, x, index);
    if(!(index.empty()))
    {
        std::cout<< index.size() <<'\n';
        for (size_t i = 0; i < index.size(); i++)
        {
            std::cout<< index[i] << " " << index[i] + 1 << '\n';
        }
    }
    else 
    {
        std::cout<< 0 <<'\n';
    }
}