#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
bool isPrint(const std::vector<int>& check_arr, int x)
{
    if(std::binary_search(check_arr.begin(), check_arr.end(), x))
        return true;
    return false;
}
int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector <int> check_arr;
    std::vector<int> var_check;
    std::stack <int> arr;
    for (size_t i = 0; i < m; i++)
    {
        int y;
        std::cin>> y ;
        arr.push(y);
        var_check.push_back(y);
    }    
    
    check_arr.push_back(arr.top());
    std::cout<< arr.top() << " ";
    arr.pop(); 
    while(!arr.empty())
    {
        if(isPrint(check_arr, arr.top())) 
        {
            arr.pop();
            continue;
        }
        else
        {
            std::cout<< arr.top() << " ";
            check_arr.push_back(arr.top());
            std::sort(check_arr.begin(),check_arr.end());
            arr.pop();
        }
    }
    // std::cout <<'\n';
    // for (auto &&i : check_arr)
    // {
    //     std::cout<< i << " ";
    // }
    // std::cout <<'\n';
    for (size_t i = 1; i <= n; i++)
    {
        if(isPrint(check_arr, i))
            continue;
        else std::cout<< i << " ";
    }
}
