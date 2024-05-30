#pragma once
#include <vector>
#include "CamBay.h"
#include "TraiTao.h"
class KhuRungChong : public CamBay
{
private:
    std::vector<int> m_chieuCao;
    TraiTao* m_traiTao;
public:
    KhuRungChong();
    void input() override;
    TraiTao* getTraiTao();
    int getValue(int);
    ~KhuRungChong();
    int getSize();
};