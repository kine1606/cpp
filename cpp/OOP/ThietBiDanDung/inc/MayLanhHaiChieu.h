#pragma once
#include "MayLanh.h"

class MayLanhHaiChieu : public MayLanh
{
private:
    bool m_khangKhuan;
    bool m_khuMui;
public:
    MayLanhHaiChieu();
    // MayLanhHaiChieu(std::string, std::string, std::string);
    void input() override;
    void output() override;
    long long getDonGia() override;
    ~MayLanhHaiChieu();
};