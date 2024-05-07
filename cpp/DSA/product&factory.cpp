#include <iostream>
#include <algorithm>
#define MAX 100000
int main()
{
    int factory, product;
    std::cin>> factory >> product ;
    int dayPerProd[MAX];
    for (size_t i = 0; i < factory; i++)
    {
        std::cin>> dayPerProd[i];
    }
    std::sort(dayPerProd, dayPerProd+factory);
    int i(1);
    while(true)
    {
        int sum(0);
        bool check (false);
        for (size_t j = 0; j < factory; j++)
        {
            sum += i/dayPerProd[j];
        }
        if(sum>=product) 
        {   
            std::cout<< i <<'\n';
            break;
        }
        i++;
    }

}