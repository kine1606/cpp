#pragma once
#include "NhanVien.h"

class NhanVienVanPhong : public NhanVien
{
private:
    int m_soNgayLamViec;
public:
    NhanVienVanPhong();
    NhanVienVanPhong(std::string, std::string);
    long long getLuong() override;
    void input() override;
    // void output() override;
    ~NhanVienVanPhong();
};
