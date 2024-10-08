#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
int main()
{
    int n;
    std::cin>> n ;
    std::map <int,int> myMap;
    for (size_t i = 0; i < n; i++)
    {
        int y;
        std::cin>> y ;
        if(myMap[y] >=1)
            myMap[y]++;
        else
            myMap[y] = 1;
    }
    int count(0);
    for(auto i = myMap.begin(); i != myMap.end(); i++)
    {
        if(i->second > i->first)
        {
            count += i->second - i->first;
        }
        else if(i->second < i->first)
        {
            count += i->second;
        }
    }
    std::cout<< count <<'\n';
}