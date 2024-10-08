#include "../inc/QuatDung.h"
#include <iostream>

QuatDung::QuatDung()
{
    m_donGia = getDonGia();
}
long long QuatDung::getDonGia()
{
    return 500;
}

void QuatDung::input()
{
    Quat::input();
}
void QuatDung::output()
{
    Quat::output();
    std::cout<< "<Quat dung> " ;
}
QuatDung::~QuatDung(){}