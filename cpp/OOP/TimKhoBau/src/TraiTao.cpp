#include "../inc/TraiTao.h"
#include <iostream>

TraiTao::TraiTao() = default;
void TraiTao::input()
{
    std::cout<< "\t Gia tri trai tao: " ;
    std::cin>> m_giaTri ;
}
int TraiTao::getGiaTri(){return m_giaTri;}
TraiTao::~TraiTao(){}