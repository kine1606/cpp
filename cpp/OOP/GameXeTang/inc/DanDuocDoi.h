#pragma once
#include "VatPhamDanDuoc.h"

class DanDuocDoi : public VatPhamDanDuoc
{
private:
    int m_attackTimes;
public:
    DanDuocDoi();
    DanDuocDoi(std::string, int);
    ~DanDuocDoi();
};