#pragma once
#include "VatPham.h"
#include <string>
class VatPhamSinhMenh : public VatPham
{
protected:
    int m_soMauHoi;
public:
    VatPhamSinhMenh();
    VatPhamSinhMenh(std::string, int);
    void input() override;
    int getSoMauHoi();
    ~VatPhamSinhMenh();
};

