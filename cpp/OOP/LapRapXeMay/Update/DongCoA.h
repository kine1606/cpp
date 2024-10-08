#pragma once
#include "DongCo.h"
class DongCoA : public DongCo
{
public:
    DongCoA();
    DongCoA(std::string, std::string, std::string);
    void input() override;
    void output() override;
    ~DongCoA();
};

