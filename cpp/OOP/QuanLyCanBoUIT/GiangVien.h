#pragma once
#include "CanBo.h"
class GiangVien : public CanBo
{
private:
    int m_teachingTime;
    int m_researchTime;
    long long m_salery;
public:
    GiangVien();
    GiangVien(std::string, std::string, std::string, int, int);

    void setTeachingTime(int);
    void setResearchTime(int);

    int getTeachingTime();
    int getResearchTime();
    void salery(const int&);
    void input();
    void output();
    friend std::istream& operator>>(std::istream& in, GiangVien&);
    ~GiangVien();
};


