#include "../inc/Game.h"
#include "../inc/VatPham.h"
#include "../inc/XeTang.h"
#include "../inc/Boss.h"
#include "../inc/DanDuocDoi.h"
#include "../inc/DanDuocDon.h"
#include "../inc/VatPhamSinhMenh.h"
#include "../inc/VatPhamDanDuoc.h"
#include <iostream>
#include <ctime>
Game::Game() = default;
void Game::input()
{
    Boss::m_count++;
    std::cout<< "Nhap so luong xe tang: " ;
    std::cin>> m_soLuong ;
    std::cin.ignore();
    for (size_t i = 0; i < m_soLuong; i++)
    {
        m_danhSachVatPham[i] = new VatPham;  
        m_danhSachXeTang[i] = new XeTang;
    }
    BOSS = new Boss();
    for (size_t i = 0; i < m_soLuong; i++)
    {
        std::cout<< i+1 <<"."  <<'\n';
        m_danhSachXeTang[i]->input();
    }
    BOSS->input();
    for (size_t i = 0; i < m_soLuong; i++)
    {
        std::cout<< i+1 <<"."  <<'\n';
        std::cout<< "Loai vat pham: (0- Dan duoc, 1-Sinh menh):" ;
        int choice;
        std::cin>> choice ;
        switch (choice)
        {
            case 0:
                m_danhSachVatPham[i] = new VatPhamDanDuoc();
                std::cout<< "Loai dan duoc (1- Dan don, 2- Dan doi):";
                std::cin>> choice ;
                std::cin.ignore();
                if(choice == 1)
                    m_danhSachVatPham[i] = new DanDuocDon();
                else    
                    m_danhSachVatPham[i] = new DanDuocDoi();
                break;
            case 1:
                m_danhSachVatPham[i] = new VatPhamSinhMenh();
                break;
        }
        m_danhSachVatPham[i]->input();
    }
    m_danhSachVatPham[1];
    for (size_t i = 0; i < m_soLuong; i++)
    {
        while(true)
        {
            srand(time(NULL));
            m_danhSachXeTang[i]->TrangBiVatPham(m_danhSachVatPham[rand()%m_soLuong]);
            if(BOSS->isDead()) return;
            if(m_danhSachXeTang[i]->isDead()) break;
            BOSS->attack(m_danhSachXeTang[i]);
        }

    }
    
}
void Game::output()
{
    for (size_t i = 0; i < m_soLuong; i++)
    {
        m_danhSachXeTang[i]->output();
    }
    
}