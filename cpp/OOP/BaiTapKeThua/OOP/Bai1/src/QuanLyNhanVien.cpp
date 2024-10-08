#include "../inc/QuanLyNhanVien.h"
#include "../inc/NhanVienSanXuat.h"
#include "../inc/NhanVienVanPhong.h"
#include <iostream>
QuanLyNhanVien::QuanLyNhanVien() = default;
void QuanLyNhanVien::input()
{
    std::cout<< "Nhap so luong nhan vien: ";
    std::cin>> m_soLuongNV ;
    for (size_t i = 0; i < m_soLuongNV; i++)
    {
        danhSachNhanVien.push_back(new NhanVien);   
    }
    for (size_t i = 0; i < m_soLuongNV; i++)
    {
        std::cout<< "  Nhan vien san xuat / Nhan vien van phong (0-nvsx, 1-nvvp):" ;
        int x;
        std::cin>> x ;
        std::cin.ignore();
        switch (x)
        {
        case 0:
            danhSachNhanVien[i] = new NhanVienSanXuat();
            break;
        case 1:
            danhSachNhanVien[i] = new NhanVienVanPhong();
        }
        danhSachNhanVien[i]->input();
    } 
}
void QuanLyNhanVien::output()
{
    for (size_t i = 0; i < m_soLuongNV; i++)
    {
        danhSachNhanVien[i]->output();
    }
}
QuanLyNhanVien::~QuanLyNhanVien()
{
    for (size_t i = 0; i < m_soLuongNV; i++)
    {
        delete danhSachNhanVien[i];
    }
}