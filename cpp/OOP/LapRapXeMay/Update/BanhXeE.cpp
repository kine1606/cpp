#include "BanhXeE.h"
#include <string>
#include <iostream>

BanhXeE::BanhXeE() = default;
BanhXeE::BanhXeE(std::string maso, std::string loai , std::string hangSX):BanhXe(maso,loai,hangSX)
{
    m_donGia = 300;   
}
void BanhXeE::input()
{
    BanhXe::input();
    m_loai = "E";
    m_donGia = 300;   
}
void BanhXeE::output()
{
    BanhXe::output();
}
BanhXeE::~BanhXeE(){}