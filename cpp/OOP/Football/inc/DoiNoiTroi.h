#pragma once
#include "DoiBong.h"
#include <string>
class DoiNoiTroi : public DoiBong
{
private:
    std::string m_tenDanhHieu;
    int m_soDanhHieu;
public:
    DoiNoiTroi() = default;
    void input()
    {
        DoiBong::input();
        getline(std::cin, m_tenDanhHieu);
        std::cin >> m_soDanhHieu;
        std::cin.ignore();
    }
    void output()
    {
        DoiBong::output();
        std::cout<< m_tenDanhHieu << "\t" << m_soDanhHieu <<'\n';
    }
    ~DoiNoiTroi(){}
};
