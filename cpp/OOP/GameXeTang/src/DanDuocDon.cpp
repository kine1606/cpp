#include "../inc/DanDuocDon.h"
#include <iostream>

DanDuocDon::DanDuocDon() 
{
    m_amThanh = "BUM";
    m_attackTimes = 1;
    
}
DanDuocDon::DanDuocDon(std::string ten, int ID):VatPhamDanDuoc(ten, ID)
{
    m_amThanh = "BUM";
    m_attackTimes = 1;
}
DanDuocDon::~DanDuocDon(){}