#include "NhanVien.h"
#include "LapTrinhVien.h"
#include "KiemChungVien.h"
#include <iostream>
int main()
{
    NhanVien* ptr[5];
    long long medium(0);
    ptr[0] = new LapTrinhVien();
    ptr[1] = new KiemChungVien();
    ptr[2] = new LapTrinhVien();
    ptr[3] = new KiemChungVien();
    // ptr[4] = new LapTrinhVien();
    for (size_t i = 0; i < 4; i++)
    {
        ptr[i]->input();
        medium +=ptr[i]->realSalery();
    }
    medium/= 4;
    for (size_t i = 0; i < 4; i++)
    {
        ptr[i]->output();
    }
    std::cout<< "Muc luong trung binh: " << medium <<'\n';
    std::cout<< "Danh sach nhan vien co luong duoi muc trung binh: " <<'\n';
    bool check(false);
    for (size_t i = 0; i < 4; i++)
    {
        if(ptr[i]->realSalery() < medium)
        {
            std::cout << ptr[i]->getName() << '\n';
            check =true;
        }
    }
    if(!check) std::cout<< "Khong co" <<'\n';
    for (size_t i = 0; i < 4; i++)
    {
        delete ptr[i];
    }
    
}