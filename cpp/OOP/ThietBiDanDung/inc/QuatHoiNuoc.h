#pragma once
#include "Quat.h"
#include <string>
class QuatHoiNuoc : public Quat
{
private:
    int m_dungTich;
public:
    QuatHoiNuoc();
    // QuatHoiNuoc(std::string, std::string, std::string);
    long long getDonGia() override;

    void input() override;
    void output() override;
    ~QuatHoiNuoc();
};