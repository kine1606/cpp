#pragma once
#include "BinaryOptionObject.h"
#include "NhaCai.h"
class Trader : public BinaryOptionObject
{
private:
    long long m_soDu;
    int m_lenhDanh;
    int m_soTienCuoc;
public:
    Trader();
    Trader(int, int);
    void input() override;
    void output() override;
    void tinhSoDu(bool);
    ~Trader();
    void bet(NhaCai*);
    friend class CoMoi;
};
