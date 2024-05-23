#pragma once
#include "ThietBi.h"
class ThietBiGDDT : public ThietBi
{
private:
    int m_kichThuoc;
public:
    ThietBiGDDT();
    ThietBiGDDT(std::string, int, int);
    void input() override;
    void output() override;
    ~ThietBiGDDT();
};
