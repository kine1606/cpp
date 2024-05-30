#include "../inc/Game.h"
#include "../inc/DuongHamNui.h"
#include "../inc/NguoiChoi.h"
#include "../inc/KhuRungChong.h"
#include "../inc/QuaiVat.h"
#include "../inc/TraiTao.h"
#include <iostream>
Game::Game() =default;
void Game::input()
{

    std::cout<< "Nhap so luong cam bay: ";
    std::cin>>  m_soLuong;
    m_nguoiChoi = new NguoiChoi();
    m_nguoiChoi->input();
    std::cout<< "NHAP THONG TIN CAC LOAI CAM BAY: " <<'\n';
    for (size_t i = 0; i < m_soLuong; i++)
    {
        std::cout<< "   Loai cam bay (0- Rung chong, 1- Duong ham nui, 2- Quai vat): ";
        int x;
        std::cin>> x ;
        switch (x)
        {
            case 0:
                m_danhSachCamBay[i] = new KhuRungChong();
                break;
            case 1:
                m_danhSachCamBay[i] = new DuongHamNui();
                break;
            case 2:
                m_danhSachCamBay[i] = new QuaiVat();
                break;
        }
        m_danhSachCamBay[i]->input();
    }
    for (size_t i = 0; i < m_soLuong; i++)
    {
        if(m_nguoiChoi->VuotChuongNgaiVat(m_danhSachCamBay[i]) == false)
        {
            std::cout<< "THAT BAI!" <<'\n';
            return ;
        }   
    }
    std::cout<< "THANH CONG!" <<'\n';
}