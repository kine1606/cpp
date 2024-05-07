#include <iostream>
#include <map>
#include <vector>
class MyMap
{
    int m_key;
    int m_value;
    void insert(int key, int value)
    {
        
    }
}
int main()
{
    int n;
    std::vector<int> arr;
    std::cin>> n ;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        std::cin>> x ;
        arr.push_back(x);
    }
    std::map<int,int> item_count;
    for (auto i : arr)
    {
        item_count[i]++;
    }
    std::map<int,int>::iterator itr;
    for (itr = item_count.begin(); itr !=item_count.end(); itr++)
    {
        std::cout<< itr->first << " " << itr->second <<'\n';
    }
    
}