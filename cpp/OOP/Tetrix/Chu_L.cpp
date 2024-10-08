#include "Chu_L.hpp"
#include "xep_hinh.hpp"
#include <iostream>
#include <vector>
//=====================================CHU L TRAI 1============================================
Chu_L_trai_1::Chu_L_trai_1(){
    list_L_trai_1.resize(4, std::vector<bool>(4, false));
    list_L_trai_1[0][0] = true;
    list_L_trai_1[1][0] = true;
    list_L_trai_1[2][0] = true;
    list_L_trai_1[2][1] = true;
    this->dai = 3;
    this->rong = 2;
}

void Chu_L_trai_1::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_L_trai_1[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_L_trai_1::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_L_trai_1::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_L_trai_1[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_L_trai_1::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_L_trai_1[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//=====================================CHU L TRAI 2============================================
Chu_L_trai_2::Chu_L_trai_2(){
    list_L_trai_2.resize(4, std::vector<bool>(4, false));
    list_L_trai_2[0][0] = true;
    list_L_trai_2[0][1] = true;
    list_L_trai_2[0][2] = true;
    list_L_trai_2[1][0] = true;
    this->dai = 2;
    this->rong = 3;
}

void Chu_L_trai_2::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_L_trai_2[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_L_trai_2::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_L_trai_2::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_L_trai_2[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_L_trai_2::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_L_trai_2[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//=====================================CHU L TRAI 3============================================
Chu_L_trai_3::Chu_L_trai_3(){
    list_L_trai_3.resize(4, std::vector<bool>(4, false));
    list_L_trai_3[0][0] = true;
    list_L_trai_3[0][1] = true;
    list_L_trai_3[1][1] = true;
    list_L_trai_3[2][1] = true;
    this->dai = 3;
    this->rong = 2;
}

void Chu_L_trai_3::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_L_trai_3[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_L_trai_3::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_L_trai_3::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_L_trai_3[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_L_trai_3::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_L_trai_3[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//=====================================CHU L TRAI 4============================================
Chu_L_trai_4::Chu_L_trai_4(){
    list_L_trai_4.resize(4, std::vector<bool>(4, false));
    list_L_trai_4[0][2] = true;
    list_L_trai_4[1][0] = true;
    list_L_trai_4[1][2] = true;
    list_L_trai_4[1][1] = true;
    this->dai = 2;
    this->rong = 3;
}

void Chu_L_trai_4::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_L_trai_4[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_L_trai_4::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_L_trai_4::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_L_trai_4[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_L_trai_4::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_L_trai_4[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//=====================================CHU L phai 1============================================
Chu_L_phai_1::Chu_L_phai_1(){
    list_L_phai_1.resize(4, std::vector<bool>(4, false));
    list_L_phai_1[0][1] = true;
    list_L_phai_1[1][1] = true;
    list_L_phai_1[2][0] = true;
    list_L_phai_1[2][1] = true;
    this->dai = 3;
    this->rong = 2;
}

void Chu_L_phai_1::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_L_phai_1[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_L_phai_1::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_L_phai_1::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_L_phai_1[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_L_phai_1::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_L_phai_1[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//=====================================CHU L phai 2============================================
Chu_L_phai_2::Chu_L_phai_2(){
    list_L_phai_2.resize(4, std::vector<bool>(4, false));
    list_L_phai_2[0][0] = true;
    list_L_phai_2[1][0] = true;
    list_L_phai_2[1][2] = true;
    list_L_phai_2[1][1] = true;
    this->dai = 2;
    this->rong = 3;
}

void Chu_L_phai_2::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_L_phai_2[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_L_phai_2::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_L_phai_2::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_L_phai_2[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_L_phai_2::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_L_phai_2[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//=====================================CHU L phai 3============================================
Chu_L_phai_3::Chu_L_phai_3(){
    list_L_phai_3.resize(4, std::vector<bool>(4, false));
    list_L_phai_3[0][0] = true;
    list_L_phai_3[0][1] = true;
    list_L_phai_3[1][0] = true;
    list_L_phai_3[2][0] = true;
    this->dai = 3;
    this->rong = 2;
}

void Chu_L_phai_3::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_L_phai_3[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_L_phai_3::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_L_phai_3::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_L_phai_3[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_L_phai_3::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_L_phai_3[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}
//=====================================CHU L phai 4============================================
Chu_L_phai_4::Chu_L_phai_4(){
    list_L_phai_4.resize(4, std::vector<bool>(4, false));
    list_L_phai_4[0][0] = true;
    list_L_phai_4[0][1] = true;
    list_L_phai_4[0][2] = true;
    list_L_phai_4[1][2] = true;
    this->dai = 2;
    this->rong = 3;
}

void Chu_L_phai_4::Xuat(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(list_L_phai_4[i][j] == true)  std::cout << "* " ;
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void Chu_L_phai_4::Nhap(){
    std::cout << "\nNhap toa do x: ";
    std::cin >> toa_do_x;
    std::cout << "\nNhap toa do y: ";
    std::cin >> toa_do_y;
}

bool Chu_L_phai_4::check(){
    if(toa_do_x + this->dai > 8 || toa_do_y + this->rong > 10) return false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            if(list_L_phai_4[i][j] == true){
                if(list[toa_do_x + i][toa_do_y + j] == true) return false;
            }
        }
    }
    return true;
}

void Chu_L_phai_4::Dat(){
    if(check() == true){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; ++j){
                if(list_L_phai_4[i][j] == true){
                    list[toa_do_x + i][toa_do_y + j] = true;
                }
            }
        }
    }else{
        std::cout << "\nKhong dat duoc!" << std::endl;
    }
}