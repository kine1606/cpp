#include "../inc/Ve.h"
#include "../inc/KhachHang.h"
#include <iostream>
Ve::Ve() = default;
void Ve::input()
{
    m_giaVe = 0;
    m_KhachHang = new KhachHang();
    m_KhachHang->input();
    std::cout<< "   Co uong nuoc giai khat khong? (0- khong, 1- co): ";
    int x;
    std::cin>> x ;
    if(x) m_giaVe += 10000;
}
int Ve::getGia()
{
    return m_giaVe;
}
int Ve::getType(){return 0;}