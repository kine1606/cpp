#include "../inc/NhaCai.h"
#include "../inc/CoMoi.h"
#include "../inc/BinaryOptionObject.h"
#include "../inc/QuanLyTroChoi.h"
#include "../inc/Trader.h"
#include <iostream>
#include <algorithm>
#include <vector>
QuanLyTroChoi::QuanLyTroChoi() = default;
void QuanLyTroChoi::input()
{
    int m_soLuong, m;
    std::vector<int> playerIndex;
    std::cin>> m_soLuong  >> m;
    for (size_t i = 0; i < m_soLuong; i++)
    {
        m_danhSach[i] = new BinaryOptionObject();
    }
    for (size_t i = 0; i < m_soLuong; i++)
    {
        m_danhSach[i]->input();
        int t_ID = m_danhSach[i]->m_ID;
        int t_type = m_danhSach[i]->m_type;
        switch (m_danhSach[i]->m_type)
        {
        case 1:
            m_danhSach[i] = new NhaCai(t_ID, t_type);
            break;
        case 2:
            m_danhSach[i] = new CoMoi(t_ID, t_type);
            break;
        case 3:
            m_danhSach[i] = new Trader(t_ID, t_type);
            playerIndex.push_back(i);
        break;
        }
        m_danhSach[i]->input();
    }
    int nhaCaiIndex(0);
    while(true)
    {
        if(m_danhSach[nhaCaiIndex]->m_type != 1) nhaCaiIndex++;
        else break;
    }
    std::cout<< "INDEX NHACAI: " << nhaCaiIndex <<'\n';
    for (size_t i = 0; i < m; i++)
    {
        int k;
        for (size_t j = 0; j < playerIndex.size(); j++)
        {
            std::cin>> k;
            dynamic_cast<Trader*>(m_danhSach[playerIndex[j]])->bet(dynamic_cast<NhaCai*>(m_danhSach[nhaCaiIndex]));
        }
        std::cin>> k ;
        dynamic_cast<NhaCai*>(m_danhSach[nhaCaiIndex])->ThaoTungKetQua();
        for (size_t j = 0; j <playerIndex.size(); j++)
        {
            dynamic_cast<Trader*>(m_danhSach[playerIndex[j]])->
                tinhSoDu(dynamic_cast<NhaCai*>(m_danhSach[nhaCaiIndex])->m_UpOrDown);
        }
    }
}
void QuanLyTroChoi::output()
{
    for (size_t i = 0; i < m_soLuong; i++)
    {
        m_danhSach[i]->output();
    }
}
QuanLyTroChoi::~QuanLyTroChoi(){}