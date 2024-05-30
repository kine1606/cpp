#include "../inc/NguoiChoi.h"
#include <iostream>
#include "../inc/TraiTao.h"
#include "../inc/CamBay.h"
#include "../inc/KhuRungChong.h"
#include "../inc/DuongHamNui.h"
#include "../inc/QuaiVat.h"
NguoiChoi::NguoiChoi() =default;
void NguoiChoi::input()
{
    std::cout<< "NHAP THONG TIN NGUOI CHOI: " << '\n';
    std::cout<< "\t Chieu cao: ";
    std::cin>> m_doCao ;
    std::cout<< "\t Ky nang: ";
    for (size_t i = 0; i < 5; i++)
    {
        int x;
        std::cin>> x ;
        m_kyNang.push_back(x);
    }
}
bool NguoiChoi::VuotChuongNgaiVat(CamBay* rhsCB)
{
    KhuRungChong* krc = dynamic_cast<KhuRungChong*> (rhsCB);
    if(krc)
    {
        std::cout<< "Nhap suc nhay nguoi choi: ";
        for (size_t i = 0; i < krc->getSize(); i++)
        {
            int x;
            std::cin>> x ;
            m_sucNhay.push_back(x);
        }
        this->an(krc->getTraiTao());
        for (size_t i = 0; i < 7; i++)
        {
            if(m_sucNhay[i] < krc->getValue(i));
                return false;
            m_sucNhay[i] = 0;
        }
        return true;
    }
    DuongHamNui* dhn = dynamic_cast<DuongHamNui*> (rhsCB);
    if(dhn)
    {
        if(m_doCao <= dhn->minVal()) 
            return true;
        return false;
    }
    QuaiVat* qv = dynamic_cast<QuaiVat*> (rhsCB);
    if(qv)
    {
        int count(0);
        for (size_t i = 0; i < 5; i++)
        {
            if(m_kyNang[i] > qv->getVal(i))
            {
                count++;
            }
        }
        if(count >=3) return true;
        return false;
    }
    return false;
}
void NguoiChoi::an(TraiTao* apl)
{
    for (int i = 0; i < 7; i++)
    {
        m_sucNhay[i] += apl->getGiaTri();
    }
}
NguoiChoi::~NguoiChoi(){}