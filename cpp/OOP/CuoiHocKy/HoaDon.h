#pragma once
#include <string>
class HangHoa
{
private:
    std::string m_name;
    int m_quantity;
    long long m_price;
public:
    HangHoa();
    void input();
    void output();
    long long getSum();
    ~HangHoa();
};

class HoaDon
{
private:
    std::string m_series;
    std::string m_date;
    int m_countList;
    HangHoa* m_list = new HangHoa[100];
public:
    long long m_sumAll = 0;
public:
    HoaDon();
    void input();
    void output();
    ~HoaDon();
};
