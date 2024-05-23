#pragma once
#include <string>
class Object
{
protected:
    int m_level;
    std::string m_element;
    virtual int m_damageDeal(std::string) = 0;  // attack
    virtual int m_damageReceived(std::string) = 0;  // take dmg
public:
    Object();
    void input();
    // void ouput();
    // ~Object();
};
