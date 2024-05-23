#include "XeMay.h"
#include "Object.h"
#include "DongCo.h"
#include "BanhXe.h"
#include "KhungXe.h"
#include <iostream>
int main()
{
    freopen("test.txt", "r", stdin);
    freopen("source.txt", "w", stdout);
    XeMay xm[5];
    for (size_t i = 0; i < 5; i++)
    {
        std::cin >> xm[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << xm[i];
    }
    
}