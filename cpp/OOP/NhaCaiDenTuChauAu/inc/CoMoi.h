#pragma once
#include "BinaryOptionObject.h"
class CoMoi : public BinaryOptionObject
{
private:
    double m_tienHoaHong;
    int m_traderID;
public:
    CoMoi();
    CoMoi(int, int);
    void input() override;
    void output() override;
    ~CoMoi();
};
