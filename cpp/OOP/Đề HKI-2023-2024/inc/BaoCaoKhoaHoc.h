#pragma once
#include <string>
#include "DanhMuc.h"
#include "TacGia.h"
class BaoCaoKhoaHoc
{
private:
    std::string m_maBaoCao;
    std::string m_tenBaoCao;
    std::string m_lienKetThamChieu;
    std::string m_namXuatBan;
    TacGia* m_tacGiaChinh;
    TacGia* m_DongTacGia[50];
    DanhMuc* m_danhMuc;
public:
    BaoCaoKhoaHoc();
    void input();
    ~BaoCaoKhoaHoc();
};
