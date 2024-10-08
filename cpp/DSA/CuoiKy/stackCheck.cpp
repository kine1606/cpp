#include <iostream>
#include <stack>
#include <map>
void input(std::stack<int>& myStack, std::map<int, bool>& myMap)
{
    int x;
    std::cin>> x ;
    if(myMap[x] == true) 
    {
        std::cout<< "Nhap lai x: " <<'\n';
    }
    else 
    {
        myStack.push(x);
        myMap[x] = true;
    }
}
int countVal(std::stack<int>& myStack, std::map<int, bool>& myMap, int value)
{
    int count(0);
    for (auto i = myMap.begin(); i != myMap.end(); i++)
    {
        if(i->first >= value) break;
        else if(i->first < value && i->second == true)
        {
            if(i->first < 2) continue;
            bool check = false;
            for (size_t j = 2; j*j <= i->first ; j++)
            {
                if(i->first% j == 0)
                {
                    check = true;
                    break;
                }
            }
            if(check) continue;
            else count++;
        }
    }
    return count;
}
void eraseFiveElement(std::stack<int>& myStack)
{
    int x =5;
    while(x--)
    {
        myStack.pop();
    }
}