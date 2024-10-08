#include "../inc/DanDuocDoi.h"

DanDuocDoi::DanDuocDoi()
{
    m_amThanh = "BUM BUM";
    m_attackTimes = 2;
}
DanDuocDoi::DanDuocDoi(std::string ten, int ID):VatPhamDanDuoc(ten, ID)
{
    m_amThanh = "BUM BUM";
    m_attackTimes = 2;
}
DanDuocDoi::~DanDuocDoi(){}