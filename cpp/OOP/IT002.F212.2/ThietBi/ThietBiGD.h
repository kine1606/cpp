#pragma once
#include "ThietBi.h"
class ThietBiGD : public ThietBi
{
private:
    int m_thoiGianToiDa;
public:
    ThietBiGD();
    ThietBiGD(std::string, int, int);
    void input() override;
    void output() override;
    ~ThietBiGD();
};