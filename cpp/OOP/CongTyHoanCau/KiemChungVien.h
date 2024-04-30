#pragma once
#include "NhanVien.h"
class KiemChungVien : public NhanVien
{
private:
    int m_errorCount;
public:
    KiemChungVien();
    KiemChungVien(std::string, std::string, unsigned int, std::string, std::string, long long, int);
    void input() override;
    void output() override;
    long long realSalery() override;
    ~KiemChungVien();
};

