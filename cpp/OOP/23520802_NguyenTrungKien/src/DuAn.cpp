#include "../inc/DuAn.h"
#include "../inc/CongViec.h"
#include "../inc/PlanViewer.h"
#include "../inc/ListViewer.h"
#include "../inc/GanttViewer.h"
#include "../inc/Exporter.h"
#include "../inc/AExporter.h"
#include "../inc/BExporter.h"
#include <iostream>
DuAn::DuAn() = default;
void DuAn::input()
{
    std::cout<< "NHAP DU AN: " <<'\n';
    std::cout<< "  So luong cong viec: ";
    std::cin>> m_soLuongCongViec ;
    std::cin.ignore();
    for (size_t i = 0; i < m_soLuongCongViec; i++)
    {
        m_danhSachCongViec[i] = new CongViec();
    }
    std::cout<< "  Ma du an: ";
    getline(std::cin, m_maDuAn);
    std::cout<< "  Ten du an: ";
    getline(std::cin, m_ten);
    std::cout<< "  Mo ta: ";
    getline(std::cin, m_moTa);
    std::cout<< "  Nguoi quan tri: ";
    getline(std::cin, m_thongTinNguoiQuanTri);
    std::cout<< "  Hien thi (0- ListViewer, 1- GanttChartViewer): ";
    int x;
    std::cin>> x ;
    switch (x)
    {
        case 0:
            m_hienThi = new ListViewer();
            break;
        case 1:
            m_hienThi = new GanttViewer();
            break;
    }
    std::cin.ignore();
    for (size_t i = 0; i < m_soLuongCongViec; i++)
    {
        m_danhSachCongViec[i]->input();
    }
}
void DuAn::output()
{
    std::cout<< "XUAT THONG TIN DU AN:" << "\n";
    m_hienThi->hienThi();
    std::cout<< "  Ma du an:" << m_maDuAn <<'\n';
    std::cout<< "  Ten du an:" << m_ten <<'\n';
    std::cout<< "  Mo ta: " << m_moTa  <<'\n';
    std::cout<< "  Nguoi quan tri: "<< m_thongTinNguoiQuanTri <<'\n';
    for (size_t i = 0; i < m_soLuongCongViec; i++)
    {
        std::cout<< i+1 << "." <<'\n';
        m_danhSachCongViec[i]->output();
    }
}
std::string DuAn::getMaSo()
{
    return m_maDuAn;
}
void DuAn::setLuuTru(int type)
{
    DuAn* temp = this; 
    if(type == 1)
    {
        m_luuTru = new AExporter();
        m_luuTru->xuatFile(temp);
    }
    else 
    {
        m_luuTru = new BExporter();
        m_luuTru->xuatFile(temp);
    }
}
DuAn::~DuAn(){}