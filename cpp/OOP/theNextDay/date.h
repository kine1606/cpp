#pragma once
class date
{
private:
    unsigned m_day;
    unsigned m_month;
    unsigned m_year;
public:
    date();
    date(unsigned day, unsigned month, unsigned year);
    void input();
    void calc();
    ~date();
};