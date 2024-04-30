#pragma once
#include <string>
class CanBo
{
protected:
    std::string m_series;
    std::string m_name;
    std::string m_sex;
public:
    CanBo();
    CanBo(std::string, std::string, std::string);

    std::string getSeries();
    std::string getName();
    std::string getSex();

    void setSeries(std::string);
    void setName(std::string);
    void setSex(std::string);
    friend std::istream& operator>>(std::istream&, CanBo&);
    friend std::ostream& operator<< (std::ostream&, const CanBo&);
    void input();
    void output();
    ~CanBo();
};