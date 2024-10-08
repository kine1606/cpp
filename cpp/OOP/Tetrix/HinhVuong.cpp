#include "HinhVuong.hpp"
#include "xep_hinh.hpp"
#include <iostream>
#include <vector>
//===================================HINH VUONG========================================
HinhVuong::HinhVuong(){
    list_HV.resize(4, std::vector<bool>(4, false));
    list_HV[0][0] = true;
    list_HV[1][1] = true;
    list_HV[0][1] = true;
    list_HV[1][0] = true;
    this->dai = 2;
    this->rong = 2;
}

void HinhVuong::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_HV[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void HinhVuong::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool HinhVuong::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_HV[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void HinhVuong::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_HV[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}