#include <iostream>
#define MAX 10000
int main()
{
    int k;
    std::cin >> k;
    int a[MAX];
    for (size_t i = 0; i <k; i++)
    {
        std::cin >> a[i];
    }
    int max(0);
    for (size_t i = 0; i <k; i++)
    {
        for (size_t j = 2; j <= a[i]/2; j++)
        {
            if(a[i]%j==0)
            {
                std::cout << "-1"; 
                return 0;
            }
            if(max<a[i])
            {
                max=a[i];
            }
        }   
    }
    std::cout << max;   
}