#include "../inc/VeHocSinh.h"
#include <iostream>
VeHocSinh::VeHocSinh() = default;
void VeHocSinh::input()
{
    Ve::input();
    m_giaVe += 20000;
    std::cout<< "   So tro choi choi trong cong vien : " ;
    std::cin>> m_soTroChoi;
    m_giaVe += m_soTroChoi*10000;
}
int VeHocSinh::getType()
{
    return 3;
}
