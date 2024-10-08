#pragma once
#include "VatPhamDanDuoc.h"

class DanDuocDon : public VatPhamDanDuoc
{
private:
    int m_attackTimes;
public:
    DanDuocDon();
    DanDuocDon(std::string, int);
    ~DanDuocDon();
};