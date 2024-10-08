#pragma once
#include "VatPham.h"
#include <string>
class VatPhamDanDuoc : public VatPham
{
protected:
    int m_soLanSuDung;
    int m_satThuongDan;
    std::string m_amThanh;
public:
    VatPhamDanDuoc();
    VatPhamDanDuoc(std::string, int);
    void input() override;
    ~VatPhamDanDuoc();
};

