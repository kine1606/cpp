#include "../inc/Boss.h"
#include "../inc/XeTang.h"
#include <string>
#include <iostream>
Boss::Boss()
{
    m_HP = 20;
    m_dmgAttack = 4;
}
Boss::Boss(std::string ten, int dmgATK):m_ten(ten), m_dmgAttack(dmgATK)
{
    m_HP = 20;
}
bool Boss::isDead()
{
    if(m_HP < 0) 
    {
        std::cout<< "BOSS is dead" <<'\n';
        return true;
    }
    return false;
}
void Boss::input()
{
    std::cout<< "Nhap ten BOSS:";
    getline(std::cin, m_ten);
    std::cout<< "Nhap suc tan cong cua BOSS: ";
    std::cin>> m_dmgAttack ;
    std::cin.ignore();
}
void Boss::takeDmg(int dmgTaken)
{
    m_HP -= dmgTaken;
}
void Boss::attack(XeTang* xeTank)
{
    xeTank->takeDmg(this->m_dmgAttack);
}
