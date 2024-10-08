#include <iostream>
#include <map>
#include <stack>
#include <set>
int main()
{
    int k;
    int n;
    std::cin>> k >> n ;
    std::map<int,int> myMap;
    std::stack <int> myStack;   
    std::map <int, bool> myCheck;
    for (size_t i = 0; i < n; i++)
    {
        int temp;
        std::cin>> temp ;
        myStack.push(temp);
        myMap[temp]++;
    }
    while(k--)
    {
        auto it = myMap;
        if(myCheck[myStack.top()] == false)
        {
            std::cout << myMap[myStack.top()] << "(" << my
        }
        myCheck[myStack.top()] = true;
    }
}