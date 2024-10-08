#include "KhungXeNhua.h"
#include <string>
#include <iostream>

KhungXeNhua::KhungXeNhua() = default;
KhungXeNhua::KhungXeNhua(std::string maso, std::string loai , std::string hangSX):KhungXe(maso,loai,hangSX)
{
    m_donGia = 200;   
}
void KhungXeNhua::input()
{
    KhungXe::input();
    m_loai = "Khung xe nhua";
    m_donGia = 200;   
}
void KhungXeNhua::output()
{
    KhungXe::output();
}
KhungXeNhua::~KhungXeNhua(){}