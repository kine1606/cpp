#include "Monomial.h"
#include <iostream>
int main()
{
    Monomial donthuc, daoham; 
    donthuc.set_Monomial();
    donthuc.get_Monomial();
    donthuc.change_Monomial();
    donthuc.get_Monomial();

    daoham = donthuc.derivative();
    daoham.get_Monomial();
    std::cout << daoham.Calc_x0(12);
}