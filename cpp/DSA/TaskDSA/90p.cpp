#include <iostream>
#include <vector>
#include <map>

int calc(std::map<int, int>& myMap, int m, int n)
{
    if(m <= 2) return 0;
    else if(m <= 4) return 1;
    else if (m <= 6) return 2;
    else 
    {
        myMap[n] = 2*myMap[n-3] + 4*myMap[n-2] + 6*myMap[n-1];
        if(myMap[n] >= m) return n-1;
        else
            calc(myMap, m, n+1);
    }
    return n;
}
int main()
{
    int m;
    std::cin>> m ;
    std::map<int, int> myMap;
    myMap[0] = 2;
    myMap[1] = 4;
    myMap[2] = 6;
    std::cout<< calc(myMap, m, 3) << '\n';
    std::cout<< myMap[3] <<'\n';
    // std::cout<< myMap[4] <<'\n';
}