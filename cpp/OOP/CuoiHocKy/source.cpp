#include "HoaDon.h"
#include "NhanVien.h"
int main()

{
    NhanVien* ptr = new NhanVien[4];
    ptr[0] = NhanVienGio();
    ptr[1] = NhanVienHoaHong();
    ptr[2] = NhanVienThang();
    ptr[3] = NhanVienGio();

    for (size_t i = 0; i < 4; i++)
    {
        ptr[i].input();
    }
    for (size_t i = 0; i < 4; i++)
    {
        ptr[i].output();
    }
    HoaDon Hd;
    Hd.input();
    Hd.output();
}