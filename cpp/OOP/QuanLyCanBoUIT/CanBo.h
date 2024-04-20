#pragma once
#include <string>
class CanBo
{
protected:
    std::string m_series;
    std::string m_name;
    std::string m_sex;
    friend std::istream& operator>>(std::istream& in, CanBo&);
public:
    CanBo();
    CanBo(std::string, std::string, std::string);

    std::string getSeries();
    std::string getName();
    std::string getSex();

    void setSeries(std::string);
    void setName(std::string);
    void setSex(std::string);
    friend std::ostream& operator<< (std::ostream& out, const CanBo&);
    void input();
    void output();
    ~CanBo();
};