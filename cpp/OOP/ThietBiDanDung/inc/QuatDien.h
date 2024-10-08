#pragma once
#include "Quat.h"
#include <string>
class QuatDien : public Quat
{
private:
    int m_pin;
public:
    QuatDien();
    // QuatDien(std::string, std::string, std::string);
    long long getDonGia() override;

    void input() override;
    void output() override;
    ~QuatDien();
};