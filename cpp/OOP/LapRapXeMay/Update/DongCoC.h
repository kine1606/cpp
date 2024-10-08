#pragma once
#include "DongCo.h"
class DongCoC : public DongCo
{
public:
    DongCoC();
    DongCoC(std::string, std::string, std::string);
    void input() override;
    void output() override;
    ~DongCoC();
};

