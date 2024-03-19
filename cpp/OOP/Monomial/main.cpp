#include "Monomial.h"
#include <iostream>
int main()
{
    Monomial donthuc, daoham; 
    donthuc.input();
    donthuc.output();
    donthuc.change_Monomial();
    donthuc.output();

    daoham = donthuc.derivative();
    daoham.output();
    std::cout << daoham.Calc_x0(12);
}