#pragma once
#include <string>
class User
{
private:
    std::string m_ten;
    std::string m_maSo;
    std::string m_vaiTro;
public:
    User();
    User(std::string, std::string, std::string);
    void input();
    void output();
    ~User();
};
