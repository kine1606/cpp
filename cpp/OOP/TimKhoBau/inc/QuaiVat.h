#pragma once
#include "CamBay.h"
#include <vector>
class QuaiVat : public CamBay
{
private:
    std::vector<int> m_kyNang;
public:
    QuaiVat();
    void input() override;
    int getVal(int);
    ~QuaiVat();
};