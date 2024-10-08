#include "Chu_T.hpp"
#include "xep_hinh.hpp"
#include <iostream>
#include <vector>
//====================================CHU T 1==================================
Chu_T_1::Chu_T_1(){
    list_T_1.resize(4, std::vector<bool>(4, false));
    list_T_1[0][0] = true;
    list_T_1[0][1] = true;
    list_T_1[0][2] = true;
    list_T_1[1][1] = true;
    this->dai = 2;
    this->rong = 3;
}

void Chu_T_1::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_T_1[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_T_1::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_T_1::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_T_1[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_T_1::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_T_1[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//====================================CHU T 2==================================
Chu_T_2::Chu_T_2(){
    list_T_2.resize(4, std::vector<bool>(4, false));
    list_T_2[1][0] = true;
    list_T_2[0][1] = true;
    list_T_2[2][1] = true;
    list_T_2[1][1] = true;
    this->dai = 3;
    this->rong = 2;
}

void Chu_T_2::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_T_2[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_T_2::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_T_2::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_T_2[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_T_2::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_T_2[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//====================================CHU T 3==================================
Chu_T_3::Chu_T_3(){
    list_T_3.resize(4, std::vector<bool>(4, false));
    list_T_3[1][0] = true;
    list_T_3[0][1] = true;
    list_T_3[1][2] = true;
    list_T_3[1][1] = true;
    this->dai = 2;
    this->rong = 3;
}

void Chu_T_3::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_T_3[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_T_3::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_T_3::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_T_3[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_T_3::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_T_3[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//====================================CHU T 4==================================
Chu_T_4::Chu_T_4(){
    list_T_4.resize(4, std::vector<bool>(4, false));
    list_T_4[0][0] = true;
    list_T_4[1][0] = true;
    list_T_4[2][0] = true;
    list_T_4[1][1] = true;
    this->dai = 3;
    this->rong = 2;
}

void Chu_T_4::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_T_4[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_T_4::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_T_4::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_T_4[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_T_4::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_T_4[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}