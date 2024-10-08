#pragma once
#include "Ve.h"
#include <vector>
class CongVien
{
private:
    // std::vector<Ve*> m_danhSachVe;
    Ve* m_danhSachVe[50];
    int m_soLuong;
public:
    void input();
    // void output();
    int tinhTong();
    void tinhSoVe();
    void ChoiNhieuNhat();
};
