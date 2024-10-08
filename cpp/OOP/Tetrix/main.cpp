#include "xep_hinh.hpp"
#include "Chu_I.hpp"
#include "Chu_L.hpp"
#include "Chu_Z.hpp"
#include "Chu_T.hpp"
#include "HinhVuong.hpp"
#include <ctime>
#include <iostream>
#include <vector>
#include <time.h>
  
int main(){
    Init_list();
    for(int i = 0; i < 25; ++i){
        Xuat_List();
        int res = rand() % (7 - 1 + 1) + 1;
        if(res == 1){
            Chu_I* t;
            t = new Chu_I_dung();
            t->Xuat();
            int xoay = 1;
            while(true){
                int choice;
                std::cout << "\nBan muon 1/Dat, 2/Bo, 3/Xoay: ";
                std::cin >> choice;
                if(choice == 1){
                    t->Nhap();
                    while(t->check() == false){
                        std::cout << "\nNhap lai: ";
                        t->Nhap();
                    }
                    t->Dat();
                    break;
                }else if(choice == 2){
                    break;
                }else if(choice == 3){
                    Chu_I* tmp;
                    if(xoay == 1){
                        tmp = new Chu_I_ngang();
                        xoay = 2;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 2){
                        tmp = new Chu_I_dung();
                        xoay = 1;
                        tmp->Xuat();
                        t = tmp;
                    }
                }else{
                    do{
                        std::cout << "\nNhap lai: ";
                        std::cin >> choice;
                    }while(choice != 1 && choice != 2 && choice != 3);
                }
            }
        }
        else if(res == 2){
            Chu_L_trai* t;
            t = new Chu_L_trai_1();
            t->Xuat();
            int xoay = 1;
            while(true){
                int choice;
                std::cout << "\nBan muon 1/Dat, 2/Bo, 3/Xoay: ";
                std::cin >> choice;
                if(choice == 1){
                    t->Nhap();
                    while(t->check() == false){
                        std::cout << "\nNhap lai: ";
                        t->Nhap();
                    }
                    t->Dat();
                    break;
                }else if(choice == 2){
                    break;
                }else if(choice == 3){
                    Chu_L_trai* tmp;
                    if(xoay == 1){
                        tmp = new Chu_L_trai_2();
                        xoay = 2;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 2){
                        tmp = new Chu_L_trai_3();
                        xoay = 3;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 3){
                        tmp = new Chu_L_trai_4();
                        xoay = 4;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 4){
                        tmp = new Chu_L_trai_1();
                        xoay = 1;
                        tmp->Xuat();
                        t = tmp;
                    }
                }else{
                    do{
                        std::cout << "\nNhap lai: ";
                        std::cin >> choice;
                    }while(choice != 1 && choice != 2 && choice != 3);
                }
            }
        }
        else if(res == 3){
            Chu_L_phai* t;
            t = new Chu_L_phai_1();
            t->Xuat();
            int xoay = 1;
            while(true){
                int choice;
                std::cout << "\nBan muon 1/Dat, 2/Bo, 3/Xoay: ";
                std::cin >> choice;
                if(choice == 1){
                    t->Nhap();
                    while(t->check() == false){
                        std::cout << "\nNhap lai: ";
                        t->Nhap();
                    }
                    t->Dat();
                    break;
                }else if(choice == 2){
                    break;
                }else if(choice == 3){
                    Chu_L_phai* tmp;
                    if(xoay == 1){
                        tmp = new Chu_L_phai_2();
                        xoay = 2;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 2){
                        tmp = new Chu_L_phai_3();
                        xoay = 3;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 3){
                        tmp = new Chu_L_phai_4();
                        xoay = 4;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 4){
                        tmp = new Chu_L_phai_1();
                        xoay = 1;
                        tmp->Xuat();
                        t = tmp;
                    }
                }else{
                    do{
                        std::cout << "\nNhap lai: ";
                        std::cin >> choice;
                    }while(choice != 1 && choice != 2 && choice != 3);
                }
            }
        }
        else if(res == 4){
            Chu_Z_trai* t;
            t = new Chu_Z_trai_1();
            t->Xuat();
            int xoay = 1;
            while(true){
                int choice;
                std::cout << "\nBan muon 1/Dat, 2/Bo, 3/Xoay: ";
                std::cin >> choice;
                if(choice == 1){
                    t->Nhap();
                    while(t->check() == false){
                        std::cout << "\nNhap lai: ";
                        t->Nhap();
                    }
                    t->Dat();
                    break;
                }else if(choice == 2){
                    break;
                }else if(choice == 3){
                    Chu_Z_trai* tmp;
                    if(xoay == 1){
                        tmp = new Chu_Z_trai_2();
                        xoay = 2;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 2){
                        tmp = new Chu_Z_trai_1();
                        xoay = 1;
                        tmp->Xuat();
                        t = tmp;
                    }
                }else{
                    do{
                        std::cout << "\nNhap lai: ";
                        std::cin >> choice;
                    }while(choice != 1 && choice != 2 && choice != 3);
                }
            }
        }
        else if(res == 5){
            Chu_Z_phai* t;
            t = new Chu_Z_phai_1();
            t->Xuat();
            int xoay = 1;
            while(true){
                int choice;
                std::cout << "\nBan muon 1/Dat, 2/Bo, 3/Xoay: ";
                std::cin >> choice;
                if(choice == 1){
                    t->Nhap();
                    while(t->check() == false){
                        std::cout << "\nNhap lai: ";
                        t->Nhap();
                    }
                    t->Dat();
                    break;
                }else if(choice == 2){
                    break;
                }else if(choice == 3){
                    Chu_Z_phai* tmp;
                    if(xoay == 1){
                        tmp = new Chu_Z_phai_2();
                        xoay = 2;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 2){
                        tmp = new Chu_Z_phai_1();
                        xoay = 1;
                        tmp->Xuat();
                        t = tmp;
                    }
                }else{
                    do{
                        std::cout << "\nNhap lai: ";
                        std::cin >> choice;
                    }while(choice != 1 && choice != 2 && choice != 3);
                }
            }
        }
        else if(res == 6){
            Chu_T* t;
            t = new Chu_T_1();
            t->Xuat();
            int xoay = 1;
            while(true){
                int choice;
                std::cout << "\nBan muon 1/Dat, 2/Bo, 3/Xoay: ";
                std::cin >> choice;
                if(choice == 1){
                    t->Nhap();
                    while(t->check() == false){
                        std::cout << "\nNhap lai: ";
                        t->Nhap();
                    }
                    t->Dat();
                    break;
                }else if(choice == 2){
                    break;
                }else if(choice == 3){
                    Chu_T* tmp;
                    if(xoay == 1){
                        tmp = new Chu_T_2();
                        xoay = 2;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 2){
                        tmp = new Chu_T_3();
                        xoay = 3;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 3){
                        tmp = new Chu_T_4();
                        xoay = 4;
                        tmp->Xuat();
                        t = tmp;
                    }else if(xoay == 4){
                        tmp = new Chu_T_1();
                        xoay = 1;
                        tmp->Xuat();
                        t = tmp;
                    }
                }else{
                    do{
                        std::cout << "\nNhap lai: ";
                        std::cin >> choice;
                    }while(choice != 1 && choice != 2 && choice != 3);
                }
            }
        }
        else if(res == 7){
            HinhVuong t;
            t.Xuat();
            while(true){
                int choice;
                std::cout << "\nBan muon 1/Dat, 2/Bo, 3/Xoay: ";
                std::cin >> choice;
                if(choice == 1){
                    t.Nhap();
                    while(t.check() == false){
                        std::cout << "\nNhap lai: ";
                        t.Nhap();
                    }
                    t.Dat();
                    break;
                }else if(choice == 2){
                    break;
                }else if(choice == 3){
                    t.Xuat();
                }else{
                    do{
                        std::cout << "\nNhap lai: ";
                        std::cin >> choice;
                    }while(choice != 1 && choice != 2 && choice != 3);
                }
            }
        }
    }
    int Count = 0;
    for(int i = 0; i < 8; ++i){
        for (int j = 0; j < 10; ++j){
            if(list[i][j] == true) Count++;
        }   
    }
    
    std::cout << "\nTong diem cua ban la: " << Count * 4;
    return 0;
}