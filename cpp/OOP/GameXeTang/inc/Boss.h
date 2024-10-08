#pragma once
#include <string>
#include "XeTang.h"
class Boss
{
private:
    std::string m_ten;
    static int m_count;
    int m_HP;
    int m_dmgAttack;
public:
    Boss();
    Boss(std::string, int);
    void takeDmg(int);
    bool isDead();
    void input();
    void attack(XeTang*);
    // void output();
    // ~Boss();
};