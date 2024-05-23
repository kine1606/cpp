#include "CDate.h"
#include <iostream>
int main()
{
    CDate cd;
    std::cin >> cd;
    cd= cd - 10;
    std::cout<< cd <<'\n';
}