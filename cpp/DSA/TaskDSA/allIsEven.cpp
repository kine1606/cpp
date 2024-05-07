#include <iostream>
int main()
{
    long long x;
    std::cin>> x ;
    while(x)
    {
        if(((x%10)) % 2 !=0)
        {
            std::cout<< "false" <<'\n';
            return 0;
        }
        else
        {
            x/=10;
        }
    }
    std::cout<< "true" <<'\n';
}