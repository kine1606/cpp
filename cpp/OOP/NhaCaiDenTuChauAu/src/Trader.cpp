#include "../inc/Trader.h"
#include <iostream>
#include <string>
#include "../inc/NhaCai.h"
Trader::Trader() 
{
    m_type = 3;
}
Trader::Trader(int ID, int type):BinaryOptionObject(ID,type){}
void Trader::input()
{
    std::cin>> m_soDu ;
    // std::cin.ignore() ;
    std::cout<< "Trader::output(): " ;
    Trader::output();
}
void Trader::output()
{
    BinaryOptionObject::output();
    std::cout<< m_soDu <<'\n';
}
void Trader::bet(NhaCai* BOSS)
{
    int loaiLenh;
    std::cin>> loaiLenh >> m_lenhDanh >> m_soTienCuoc ;
    std::cout<< "Loai Lenh: " << loaiLenh << ", lenh danh: " << m_lenhDanh << ", so Tien cuoc: " << m_soTienCuoc  <<'\n';
    if(loaiLenh == 0)
    {
        if(m_lenhDanh == 0) // down
            BOSS->calc(0, m_soTienCuoc);
        else if(m_lenhDanh == 1) // up
            BOSS->calc(1, m_soTienCuoc);
    }
    else if(loaiLenh == 1)
    {
        if(m_lenhDanh == 1)  // long 
            BOSS->calc(1,m_soTienCuoc);
        else if(m_lenhDanh == 0)
        {
            BOSS->calc(0,m_soTienCuoc);
            BOSS->calc(1,m_soTienCuoc);
        }
        else if(m_lenhDanh == -1)
            BOSS->calc(0,m_soTienCuoc);
    }
}
void Trader::tinhSoDu(bool ketQua)
{
    if(m_lenhDanh ==1 && ketQua == true )
    {
        m_soDu += m_soTienCuoc;
    }
    else if(m_lenhDanh == 0 && ketQua == false)
    {
        m_soDu += m_soTienCuoc;
    }
    else
    {
        m_soDu -= m_soTienCuoc;
    }
    m_soTienCuoc = 0;
}
Trader::~Trader(){}