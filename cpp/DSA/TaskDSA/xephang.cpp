#include <iostream>
#include <map>
#include <stack>
int isPrint(std::map<int,bool>& var_check, int x)
{
    if(var_check[x] == false)
    {
        var_check[x] = true;
    }
    else if(var_check[x]==true) return 1;
    return -1;
}
int main()
{
    int n, m;
    std::cin>> n >> m ;
    std::map<int, bool> var_check;
    std::stack<int> arr;
    for (size_t i = 1; i <=n; i++)
    {
        var_check[i] = false;
    }
    for (size_t i = 0; i <m; i++)
    {
        int y;
        std::cin>> y;
        arr.push(y);
    }
    while(!arr.empty())
    {
        if(isPrint(var_check, arr.top()) == -1)
        {
            std::cout<< arr.top() << " ";
        }
        arr.pop();
    }
    for (size_t i = 1; i <= n; i++)
    {
        if(isPrint(var_check, i) == -1)
        {
            std::cout<< i << " ";
        }
    }
    
}