#pragma once
#include "ThietBi.h"
class ThietBiGDCS : public ThietBi
{
private:
    int m_doSang;
public:
    ThietBiGDCS();
    ThietBiGDCS(std::string, int, int);
    void input() override;
    void output() override; 
    ~ThietBiGDCS();
};
