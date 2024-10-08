#include "xep_hinh.hpp"
#include <iostream>
#include <vector>
//====================================MA TRAN BAN DAU==================================
void Xuat_List(){
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 10; ++j){
            if(list[i][j] == true) std::cout << "* ";
            else std::cout << ". ";
        }
        std::cout << "\n";
    }
}
void Init_list(){
    int temp = rand() % (35 - 20 + 1) +20;
    for(int i = 0; i < temp; i++){
        int x = rand() % 8;
        int y = rand() % 10;
        list[x][y] = true;
    }
}
