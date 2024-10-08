#pragma once
#include <string>
#include "KhachHang.h"
class Ve
{
protected:
    int m_giaVe;
    int m_soTroChoi;
    KhachHang* m_KhachHang;
public:
    Ve();
    virtual void input();
    virtual int getType();
    int getGia();
    friend class CongVien;
};
