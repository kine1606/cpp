#include <iostream>
#include "../inc/VeKhachVangLai.h"
VeKhachVangLai::VeKhachVangLai() = default;
void VeKhachVangLai::input()
{
    Ve::input();
    m_giaVe +=60000;
    std::cout<< "   So tro choi choi trong cong vien: ";
    std::cin>> m_soTroChoi;
    m_giaVe += m_soTroChoi*20000;
    std::cout<< "   Co di xe hay khong ? (0- khong, 1- co):" ;
    int x;
    std::cin>> x ;
    if(x) m_giaVe+=5000;
}
int VeKhachVangLai::getType()
{
    return 2;
}
