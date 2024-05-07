#include <iostream>
#include <string>
int main()
{
    long long y;
    std::cin>> y ;
    while(y%10 == 0)
    {
        y/=10;
    }
    std::string x = std::to_string(y);
    int count(0);
    for (size_t i = 1; x[i] != '\0'; i++)
    {
        if(x[i] == '0')
        {
            if(x[i-1] != '0' || x[i+1] != '0')  count++;
        }
    }
    std::cout<< count <<'\n';
}