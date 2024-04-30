#pragma once
#include "SinhVien.h"
#include <string>
class DaiHoc : public SinhVien
{
private:
    std::string m_thesis_name;
    double m_thesis_mark;
public:
    DaiHoc();
    DaiHoc(std::string, std::string, std::string,int, double, std::string, double);
    void input();
    void output();
    ~DaiHoc();
    bool isGraduate() override;
};
