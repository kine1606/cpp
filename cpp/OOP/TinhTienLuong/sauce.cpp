#include "NhanVien.h"
#include <iostream>
#include <string>
int main()
{
    NhanVien *ptr[5];
    ptr[0] = new NhanVienQuanLy();
    ptr[1] = new NhanVienSanXuat();
    ptr[2] = new NhanVienVanPhong();
    ptr[3] = new NhanVienVanPhong();
    ptr[4] = new NhanVienQuanLy();
    long long sum(0);
    for (size_t i = 0; i < 5; i++)
    {
        ptr[i]->input();
        sum+= ptr[i]->realSalery();
    }
    for (size_t i = 0; i < 5; i++)
    {
        ptr[i]->output();
    }
    std::cout<< "Tong luong cua cong ty: " << sum <<'\n';
    std::cout << "Nhap ten nhan vien can tim: ";
    std::string temp;
    getline(std::cin, temp);
    bool check(false);
    for (size_t i = 0; i < 5; i++)
    {
        if(temp == ptr[i]->getName())
        {
            std::cout<< "Tim thay nhan vien" <<'\n';
            check = true;
        }
    }
    if(!check) std::cout<< "Khong tim thay!" <<'\n';
}