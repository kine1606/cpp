#pragma once
#include "Ve.h"
class VeKhachVangLai : public Ve
{

public:
    VeKhachVangLai();
    void input() override;
    int getType() override;
    friend class CongVien;
};
