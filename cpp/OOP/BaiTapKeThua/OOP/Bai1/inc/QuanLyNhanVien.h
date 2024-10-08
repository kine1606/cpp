#pragma once
#include "NhanVien.h"
#include <vector>
class QuanLyNhanVien
{
private:
    std::vector<NhanVien*> danhSachNhanVien;
    int m_soLuongNV;
public:
    QuanLyNhanVien();
    void input();
    void output();
    ~QuanLyNhanVien();
};

