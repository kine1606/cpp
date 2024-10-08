#include "Chu_Z.hpp"
#include "xep_hinh.hpp"
#include <iostream>
#include <vector>
//===============================CHU Z TRAI============================================
Chu_Z_trai_1::Chu_Z_trai_1(){
    list_Z_trai_1.resize(4, std::vector<bool>(4, false));
    list_Z_trai_1[0][0] = true;
    list_Z_trai_1[0][1] = true;
    list_Z_trai_1[1][2] = true;
    list_Z_trai_1[1][1] = true;
    this->dai = 2;
    this->rong = 3;
}

void Chu_Z_trai_1::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_Z_trai_1[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_Z_trai_1::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_Z_trai_1::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_Z_trai_1[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_Z_trai_1::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_Z_trai_1[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//===================================CHU Z TRAI 2===================================
Chu_Z_trai_2::Chu_Z_trai_2(){
    list_Z_trai_2.resize(4, std::vector<bool>(4, false));
    list_Z_trai_2[0][1] = true;
    list_Z_trai_2[1][0] = true;
    list_Z_trai_2[1][1] = true;
    list_Z_trai_2[2][0] = true;
    this->dai = 2;
    this->rong = 3;
}

void Chu_Z_trai_2::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_Z_trai_2[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_Z_trai_2::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_Z_trai_2::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_Z_trai_2[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_Z_trai_2::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_Z_trai_2[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//===================================CHU Z PHAI 1===================================
Chu_Z_phai_1::Chu_Z_phai_1(){
    list_Z_phai_1.resize(4, std::vector<bool>(4, false));
    list_Z_phai_1[0][1] = true;
    list_Z_phai_1[0][2] = true;
    list_Z_phai_1[1][0] = true;
    list_Z_phai_1[1][1] = true;
    this->dai = 2;
    this->rong = 3;
}

void Chu_Z_phai_1::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_Z_phai_1[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_Z_phai_1::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_Z_phai_1::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_Z_phai_1[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_Z_phai_1::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_Z_phai_1[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//===================================CHU Z PHAI 2===================================
Chu_Z_phai_2::Chu_Z_phai_2(){
    list_Z_phai_2.resize(4, std::vector<bool>(4, false));
    list_Z_phai_2[0][0] = true;
    list_Z_phai_2[1][0] = true;
    list_Z_phai_2[2][1] = true;
    list_Z_phai_2[1][1] = true;
    this->dai = 3;
    this->rong = 2;
}

void Chu_Z_phai_2::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_Z_phai_2[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_Z_phai_2::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_Z_phai_2::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_Z_phai_2[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_Z_phai_2::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_Z_phai_2[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}