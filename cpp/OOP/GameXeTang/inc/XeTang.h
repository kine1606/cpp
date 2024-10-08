#pragma once
#include "VatPham.h"
#include <string>
// #include "Boss.h"
class XeTang
{
private:
    std::string m_ten;
    int m_ID;
    int m_HP;
public:
    XeTang();
    XeTang(std::string, int);
    // void attack(Boss*);
    bool isDead();
    void takeDmg(int);
    void TrangBiVatPham(VatPham*);
    void input();
    void output();
    // ~XeTang();
};
