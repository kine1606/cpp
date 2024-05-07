#include <iostream>
#include <algorithm>
const int MAXN = 1+1e5;
int main()
{
    int n, q;
    std::cin>> n >> q ;
    int array[MAXN];
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> array[i];
    }
    std::sort(array, array+n);
    while(q--)
    {
        int k;
        std::cin >> k;
        if(std::binary_search (array, array+n, k))
            std::cout<< "YES" <<'\n';
        else 
            std::cout<< "NO" <<'\n';
    }
}