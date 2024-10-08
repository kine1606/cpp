#include "../inc/CongVien.h"
#include <iostream>
int main()
{
    CongVien ds;
    ds.input();
    std::cout<< "Tong tien ve: " << ds.tinhTong() << '\n';
    ds.tinhSoVe();
    ds.ChoiNhieuNhat();
}