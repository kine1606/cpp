#include "DaThuc.h"
#include <iostream>
#include <iomanip>
int main()
{
    int n;
    std::cin>> n ;
    poli list;
    for (size_t i = 0; i <n; i++)
    {
        double t_coeff;
        double t_deg;
        std::cin>> t_coeff >> t_deg ;
        data dt;
        dt.m_coeff = t_coeff;
        dt.m_deg = t_deg;
        mono* temp = new mono(dt);
        list.addTail(temp);
    }
    double x;
    std::cin>> x ;
    list.printPoli();
    std::cout <<'\n';
    std::cout << "Voi x=" << x << ", gia tri da thuc la: "<< 
        std::fixed << std::setprecision(2) << list.CalcX(x);
}