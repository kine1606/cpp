#pragma once

#include "KhungXe.h"
#include "DongCo.h"
#include "BanhXe.h"
#include <string>
#include <iostream>

class XeMay
{
private:
    std::string m_msx;
    DongCo* m_dc;
    BanhXe* m_bx;
    KhungXe* m_kx;
public:
    XeMay();
    // XeMay(std::string,const DongCo&, const BanhXe&, const KhungXe&);
    // friend std::istream& operator>> (std::istream& , XeMay& );
    // friend std::ostream& operator<< (std::ostream& , const XeMay&);
    void input();
    void output();
    ~XeMay();
};
