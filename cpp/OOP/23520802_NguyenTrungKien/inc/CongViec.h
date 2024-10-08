#pragma once
#include <string>

class CongViec
{
private:
    std::string m_ID;
    std::string m_tieuDe;
    std::string m_moTa;
    std::string m_ngayKetThuc;
    CongViec* m_danhSachLienQuan[50];
    bool m_trangThai;
    std::string m_nguoiTao;
    std::string m_nguoiThucHien;
public:
    CongViec();
    void input();
    void output();
    ~CongViec();
};
