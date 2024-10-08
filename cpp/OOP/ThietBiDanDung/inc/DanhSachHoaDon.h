#pragma once
#include <iostream>
#include "HoaDon.h"
#include <vector>
class DanhSachHoaDon
{
private:
    // HoaDon* m_DSHD[50];
    std::vector<HoaDon> m_DSHD;
    int m_soLuong;
    long long m_tongDonGia;
public:
    DanhSachHoaDon();
    void input();
    void output();
    ~DanhSachHoaDon();
};
