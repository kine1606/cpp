#pragma once
#include "Quat.h"
#include <string>
class QuatDung : public Quat
{
public:
    QuatDung();
    // QuatDung(std::string, std::string, std::string);
    long long getDonGia() override;
    void input() override;
    void output() override;
    ~QuatDung();
};