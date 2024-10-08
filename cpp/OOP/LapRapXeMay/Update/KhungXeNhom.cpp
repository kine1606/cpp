#include "KhungXeNhom.h"
#include <string>
#include <iostream>

KhungXeNhom::KhungXeNhom() = default;
KhungXeNhom::KhungXeNhom(std::string maso, std::string loai , std::string hangSX):KhungXe(maso,loai,hangSX)
{
    m_donGia = 500;   
}
void KhungXeNhom::input()
{
    KhungXe::input();
    m_loai = "Khung xe Nhom";
    m_donGia = 500;   

}
void KhungXeNhom::output()
{
    KhungXe::output();
}
KhungXeNhom::~KhungXeNhom(){}