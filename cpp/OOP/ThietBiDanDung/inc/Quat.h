#pragma once
#include "ThietBiDanDung.h"
#include <string>

class Quat : public ThietBiDanDung
{
public:
    Quat();
    // Quat(std::string,std::string, std::string);
    virtual long long getDonGia();
    void input() override;
    void output() override;
    virtual ~Quat();
};
