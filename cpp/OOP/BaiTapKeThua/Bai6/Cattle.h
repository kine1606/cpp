#pragma once
class Cattle
{
protected:
    int m_child;
    int m_milk;
public:
    Cattle();
    Cattle(int, int);
    virtual void speak() = 0;
    int getChild();
    int getMilk();
    virtual ~Cattle();

};
