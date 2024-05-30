#include "../inc/QuaiVat.h"
#include <iostream>
QuaiVat::QuaiVat() = default;
void QuaiVat::input()
{
    std::cout<< "NHAP THONG TIN QUAI VAT: " <<'\n';
    std::cout<< "\t Suc manh ky nang: ";
    for (size_t i = 0; i < 5; i++)
    {
        int x;
        std::cin>> x ;
        m_kyNang.push_back(x);
    }
}
int QuaiVat::getVal(int index)
{
    return m_kyNang[index];
}
QuaiVat::~QuaiVat(){}