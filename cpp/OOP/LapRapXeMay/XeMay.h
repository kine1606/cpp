#pragma once
#include <string>
#include "BanhXe.h"
#include "KhungXe.h"
#include "DongCo.h"

class XeMay
{
private:
    std::string m_msx;
    long long m_donGia;
    KhungXe m_khungXe;
    DongCo m_dongCo;
    BanhXe m_banhXe;
public:
    XeMay();
    XeMay(std::string,const DongCo&, const BanhXe&, const KhungXe&);
    long long getDonGia();
    friend std::istream& operator>>(std::istream& in, XeMay&);
    friend std::ostream& operator<<(std::ostream& out, const XeMay&);
    ~XeMay();
};