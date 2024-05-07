#include "TuDienAnhViet.h"
#include <string>
#include <iostream>
int main()
{
    TuDienAnhViet TDAV;
    for (size_t i = 0; i < 5; i++)
    {
        char x[10];
        char y[20];
        std::cout<< "Nhap tu tieng Anh: ";
        std::cin.getline(x, 10);
        std::cout<< "Nhap nghia tieng Viet: ";
        std::cin.getline(y, 20);
        TreeNode* new_node = new TreeNode(x, y);
        TDAV.addNode(new_node);
    }
    TDAV.bfs();
    TDAV.find();
    
}