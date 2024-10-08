#pragma once
#include "CongViec.h"
#include "PlanViewer.h"
#include "Exporter.h"
#include <string>
class Exporter;
class DuAn
{
private:
    CongViec* m_danhSachCongViec[50];
    int m_soLuongCongViec;
    std::string m_maDuAn;
    std::string m_ten;
    std::string m_moTa;
    std::string m_thongTinNguoiQuanTri;
    PlanViewer* m_hienThi;
    Exporter* m_luuTru;
public:
    DuAn();
    void input();
    void setLuuTru(int);
    std::string getMaSo();
    void output();
    ~DuAn();
};

