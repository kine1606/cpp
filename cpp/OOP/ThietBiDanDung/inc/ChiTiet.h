#pragma once
#include "ThietBiDanDung.h"
class ChiTiet
{
private:
    int m_soLuongBanRa;
    ThietBiDanDung* m_ThietBi;
public:
    ChiTiet();
    void input();
    void output();
    ~ChiTiet();
    friend class HoaDon;
};