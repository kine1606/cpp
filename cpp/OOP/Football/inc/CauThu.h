#pragma once
#include <string>
#include <iostream>
class CauThu
{
private:
    std::string m_ten;
    double m_chieuCao;
    int m_tuoi;
    double m_canNang;
    std::string m_viTri;
public:
    CauThu() = default;
    void input()
    {
        getline(std::cin, m_ten);
        std::cin>> m_tuoi >> m_canNang >> m_chieuCao ;
        std::cin.ignore() ;
        getline(std::cin, m_viTri);
    }
    int getChieuCao(){return m_chieuCao;}
    ~CauThu(){}
};
