#include <iostream>
#include <vector>
int largest_input()
{
    long long n;
    long long Max(0);
    do
    {   
        std::cin >> n;
        if(Max<n) Max=n;
    } while (n%10!=0);
    return Max;
}
int main()
{
    std::cout << largest_input();
}