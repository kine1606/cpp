#include <iostream>
#include <vector>
#include <algorithm>
//1 0 2 5 6 4
//0 2 3 4 4 7
#define MAXN 100000
int main()
{
    int n;
    std::cin >> n;
    std::vector <unsigned> array;
    for (size_t i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        array.push_back(temp);
    }
    std::cout<< 0 << " ";
    std::vector <unsigned> mex;
    mex.push_back(array[0]);

}