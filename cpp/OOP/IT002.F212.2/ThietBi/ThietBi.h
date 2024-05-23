#pragma once
#include <string>
class ThietBi
{
protected:
    std::string m_hangSanXuat;
    int m_congSuat;
public:
    ThietBi();
    ThietBi(std::string, int);
    virtual void input();
    virtual void output();
    virtual ~ThietBi();
};
