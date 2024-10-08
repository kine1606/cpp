#pragma once
#include <string>
class TacGia
{
private:
    std::string m_maSo;
    std::string m_ten;
    std::string m_chuyenNganh;
    std::string m_sdt;
public:
    TacGia();
    void input();
    ~TacGia();
};