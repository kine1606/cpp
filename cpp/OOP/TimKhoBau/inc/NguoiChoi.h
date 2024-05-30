#pragma once
#include <vector>
#include "CamBay.h"
#include "TraiTao.h"
class NguoiChoi
{
private:
    std::vector<int> m_sucNhay;
    int m_doCao;
    std::vector<int> m_kyNang;
public:
    NguoiChoi();
    void an(TraiTao*);
    bool VuotChuongNgaiVat(CamBay*);
    void input();
    void output();
    ~NguoiChoi();
};
