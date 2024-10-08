#include "Chu_I.hpp"
#include "xep_hinh.hpp"
#include <iostream>
#include <vector>
//====================================CHU I DUNG==================================
Chu_I_dung::Chu_I_dung(){
    list_I_dung.resize(4, std::vector<bool>(4, false));
    for(int i = 0; i < 4; ++i){
        list_I_dung[i][0] = true;
    }
    this->dai = 1;
    this->rong = 4;
}

void Chu_I_dung::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_I_dung[i][j] == true)  std::cout << "* " ;
        }
        std::cout << "\n";
    }
}

void Chu_I_dung::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_I_dung::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_I_dung[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_I_dung::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_I_dung[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//====================================CHU I NGANG==================================
Chu_I_ngang::Chu_I_ngang(){
    list_I_ngang.resize(4, std::vector<bool>(4, false));
    for(int i = 0; i < 4; ++i){
        list_I_ngang[0][i] = true;
    }
    this->dai = 4;
    this->rong = 1;
}

void Chu_I_ngang::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_I_ngang[i][j] == true)  std::cout << "* " ;
            // else std::cout << ". ";
        }
        std::cout << "\n";
    }
}

void Chu_I_ngang::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_I_ngang::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_I_ngang[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_I_ngang::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_I_ngang[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}