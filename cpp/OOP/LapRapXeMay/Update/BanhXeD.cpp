#include "BanhXeD.h"
#include <string>
#include <iostream>

BanhXeD::BanhXeD() = default;
BanhXeD::BanhXeD(std::string maso, std::string loai , std::string hangSX):BanhXe(maso,loai,hangSX)
{
    m_donGia = 400;   
}
void BanhXeD::input()
{
    BanhXe::input();
    m_loai = "D";
    m_donGia = 400;   
}
void BanhXeD::output()
{
    BanhXe::output();
}
BanhXeD::~BanhXeD(){}