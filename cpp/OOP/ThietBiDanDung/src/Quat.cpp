#include "../inc/Quat.h"
#include <string>
#include <iostream>

Quat::Quat() = default;
void Quat::input()
{
    ThietBiDanDung::input();
}
void Quat::output()
{
    std::cout<< "\t\t+ May quat: <" << m_maSP << "> <" << m_tenSP << "> <" << m_hangSanXuat << "> <" << m_donGia << "> ";
}
long long Quat::getDonGia()
{
    return 0;
}
Quat::~Quat(){}