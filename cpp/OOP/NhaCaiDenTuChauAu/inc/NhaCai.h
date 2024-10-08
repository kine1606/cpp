#pragma once
#include <map>
#include "BinaryOptionObject.h"
class NhaCai : public BinaryOptionObject
{
private:
    long long m_soDu;
    // int m_countDown;
    // int m_countUp;
    bool m_UpOrDown;
    std::map<bool, int> m_xemXet;
public:
    bool m_ketQua;
    NhaCai();
    NhaCai(int, int);
    void calc(int, int);
    void ThaoTungKetQua();
    void tinhSoDu();
    void erase();
    void input() override;
    void output() override;
    ~NhaCai();
    friend class Trader;
    friend class QuanLyTroChoi;
};
