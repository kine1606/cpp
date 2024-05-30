#include "../inc/KhuRungChong.h"
#include <iostream>
KhuRungChong::KhuRungChong() = default;
void KhuRungChong::input()
{
    std::cout<< "NHAP THONG TIN RUNG CHONG:" <<'\n';
    std::cout<< "\t Chieu cao rung thong: ";
    for (size_t i = 0; i < 7; i++)
    {
        int x;
        std::cin>> x ;
        m_chieuCao.push_back(x);
    }
    m_traiTao = new TraiTao();
    std::cout<< "\t Thong tin qua tao:";
    m_traiTao->input();
}
int KhuRungChong::getValue(int index)
{
    return m_chieuCao[index];
}
int KhuRungChong::getSize(){return m_chieuCao.size();}
TraiTao* KhuRungChong::getTraiTao()
{
    return m_traiTao;
}
KhuRungChong::~KhuRungChong(){}