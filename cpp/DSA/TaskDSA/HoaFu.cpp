#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int sum(0);
    for (size_t i = 1; i < n; i++)
    {
        sum += i;
        if(sum > n) 
        {
            std::cout << i - 1;
            break;
        }
    }
    
}