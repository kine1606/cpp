#include "../inc/CongVien.h"
#include "../inc/Ve.h"
#include "../inc/VeHocSinh.h"
#include "../inc/VeKhachQuen.h"
#include "../inc/VeKhachVangLai.h"
#include <iostream>
void CongVien::input()
{
    std::cout<< "Nhap so ve: ";
    std::cin>> m_soLuong ;
    for (size_t i = 0; i < m_soLuong; i++)
    {
        m_danhSachVe[i] = new Ve();
    }
    for (size_t i = 0; i < m_soLuong; i++)
    {
        std::cout<< "   Nhap loai ve: (1- Ve khach quen, 2- Ve khach vang lai, 3- Ve hoc sinh): ";
        int x;
        std::cin>> x ;
        if(x == 1)
            m_danhSachVe[i] = new VeKhachQuen();
        else if(x== 2)
            m_danhSachVe[i] = new VeKhachVangLai();
        else   m_danhSachVe[i] = new VeHocSinh();
        m_danhSachVe[i]->input();
    }
}
int CongVien::tinhTong()
{  
    int count(0);
    for (size_t i = 0; i < m_soLuong; i++)
    {
        count+= m_danhSachVe[i]->getGia();
    }
    return count;
}
void CongVien::tinhSoVe()
{
    int veKhachQuen(0);
    int veKhachVangLai(0);
    int veHocSinh(0);
    for (size_t i = 0; i < m_soLuong; i++)
    {
        if(m_danhSachVe[i]->getType() ==1)
        {
            veKhachQuen++;
        }
        else if (m_danhSachVe[i]->getType() == 2)
        {
            veKhachVangLai++;
        }
        else veHocSinh++;
    }
    if(veKhachQuen > veKhachVangLai && veKhachQuen > veHocSinh) 
        std::cout<< "Ve khach quen duoc ban nhieu nhat!" <<'\n';
    else if(veKhachVangLai > veKhachQuen && veKhachVangLai > veHocSinh)
        std::cout << "Ve khach vang lai duoc ban nhieu nhat!" << '\n';
    else if (veHocSinh > veKhachQuen && veHocSinh > veKhachVangLai)
        std::cout << "Ve hoc sinh duoc ban nhieu nhat!" <<'\n';
    else std::cout<< "Ba loai ve bang nhau" <<'\n';
}
void CongVien::ChoiNhieuNhat()
{
    int index(0);
    bool check(false);
    for (size_t i = 1; i < m_soLuong; i++)
    {
        if(m_danhSachVe[i]->getType() == 2)
        {
            if(m_danhSachVe[index]->m_soTroChoi < m_danhSachVe[i]->m_soTroChoi)
            {
                index = i;
                check = true;
            }                    
        }
    }
    if(check == false)
        std::cout<< "Khong co khach vang lai" <<'\n';
    else 
        std::cout<< "Khach hang " << m_danhSachVe[index]->m_KhachHang->m_name <<" choi nhieu tro choi nhat!" <<'\n';
}