#pragma once
#include "Ve.h"
class VeHocSinh : public Ve
{

public:
    VeHocSinh();
    void input() override;
    int getType() override;
};
