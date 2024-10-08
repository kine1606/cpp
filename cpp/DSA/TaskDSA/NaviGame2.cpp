#include <vector>
#include <map>
#include <iostream>

int main()
{
    std::vector<int> output_arr;
    std::map <int, bool> myMap;
    while(true)
    {
        int x, y;
        std::cin >> x;
        if(!x) break;
        std::cin >> y;
        if(x == 1)  myMap[y] = true;
        else if(x == 2)
        {
            bool isPush(false);
            int index(0);
            for (auto i = myMap.begin(); i != myMap.end(); i++)
            {
                index++;
                if(i->first == y && i->second == true) 
                {   
                    isPush = true;
                    output_arr.push_back(index);
                    break;
                }
            }
            if(!isPush)
            {
                output_arr.push_back(0);
            }
        }
    }
    for (auto &&i : output_arr)
    {
        std::cout << i << '\n';
    }
    
}