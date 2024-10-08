#pragma once
#include "DongCo.h"
class DongCoB : public DongCo
{
private:
    int m_tieuChuan;
public:
    DongCoB();
    DongCoB(std::string, std::string, std::string);
    void input() override;
    void output() override;
    ~DongCoB();
};

