#pragma once
#include "Object.h"
class NhanVat : public Object
{
private:
    std::string m_class;
    virtual int m_damageDeal() = 0;  // attack
    virtual int m_damageReceived(int, std::string) = 0;  // take dmg
public:
    NhanVat();
    void input();
    void output();
    ~NhanVat();
};

class HeHoa : public Object
{
private:
    int m_damageDeal(std::string);
    int m_damageReceived( std::string);
public:
    HeHoa(/* args */);
    ~HeHoa();
};

class HeTho: public Object
{
private:
    int m_damageDeal(std::string);
    int m_damageReceived(std::string);
public:
    HeTho(/* args */);
    ~HeTho();
};
class HeThuy: public Object
{
private:
    int m_damageDeal(std::string);
    int m_damageReceived( std::string);
public:
    HeThuy(/* args */);
    ~HeThuy();
};
class HeKim: public Object
{
private:
    int m_damageDeal(std::string);
    int m_damageReceived( std::string);
public:
    HeKim(/* args */);
    ~HeKim();
};
class HeMoc: public Object
{
private:
    int m_damageDeal(std::string);
    int m_damageReceived(std::string);
public:
    HeMoc(/* args */);
    ~HeMoc();
};
