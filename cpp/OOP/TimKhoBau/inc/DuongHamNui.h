#pragma once
#include "CamBay.h"
#include <vector>
class DuongHamNui : public CamBay
{
private:
    std::vector<int> m_doCao;
public:
    DuongHamNui();
    void input() override;
    ~DuongHamNui();
    int getSize();
    int minVal();
};
