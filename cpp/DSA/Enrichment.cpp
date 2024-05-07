#include <iostream>
#include <vector>  
#include <algorithm>
int main()
{
    int n, m;
    std::vector <std::vector <unsigned int>> array;
    std::cin>> n >> m ;
    for (size_t i = 0; i < n; i++)
    {
        std::vector <unsigned int> temp;
        for (size_t j = 0; j < m; j++)
        {
            unsigned int x;
            std::cin>> x;
            temp.push_back(x);
        }
        array.push_back(temp);
    }
    std::vector <int> mini;
    for (size_t i = 1; i < n-1; i++)
    {
        for (size_t j = 1; j < m-1; j++)
        {
            int tempura = 0;
            tempura += array[i-1][j-1];
            tempura += array[i-1][j];
            tempura += array[i-1][j+1];

            tempura += array[i][j-1];
            tempura += array[i][j];
            tempura += array[i][j+1];

            tempura += array[i+1][j-1];
            tempura += array[i+1][j];
            tempura += array[i+1][j+1];
            mini.push_back(tempura);
        }
    }
    std::sort(mini.begin(), mini.end());
    std::cout << mini[0];
    return 0;
}