#include "../inc/VeKhachQuen.h"
VeKhachQuen::VeKhachQuen() = default;
void VeKhachQuen::input()
{
    Ve::input();
    m_giaVe+=150000;
}
int VeKhachQuen::getType()
{
    return 1;
}
