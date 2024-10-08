#pragma once
#include "ThietBiDanDung.h"

class MayLanh : public ThietBiDanDung
{
protected:
    bool m_inverter;
public:
    MayLanh();
    // MayLanh(std::string, std::string, std::string);
    virtual long long getDonGia();
    void input() override;
    void output() override;
    ~MayLanh();
};
