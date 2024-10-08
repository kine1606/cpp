#include "../inc/CoMoi.h"
#include <iostream>
#include <iomanip>
CoMoi::CoMoi()
{
    m_type = 2;
}
CoMoi::CoMoi(int ID, int type):BinaryOptionObject(ID,type){}
void CoMoi::input()
{
    std::cin>> m_traderID;
    std::cout<< "CoMoi::output(): " ;
    CoMoi::output();
}
void CoMoi::output()
{
    BinaryOptionObject::output();
    std::cout<< std::setprecision(2) << std::fixed << m_traderID <<'\n';
}
CoMoi::~CoMoi(){}