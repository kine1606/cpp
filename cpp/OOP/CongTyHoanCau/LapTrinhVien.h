#pragma once
#include "NhanVien.h"
class LapTrinhVien : public NhanVien
{
private:
    int m_overtime;
    long long salery;
public:
    LapTrinhVien();
    LapTrinhVien(std::string, std::string,unsigned int,std::string, std::string, long long, int);
    void input() override;
    void output() override;
    long long realSalery() override;
    ~LapTrinhVien();
};
