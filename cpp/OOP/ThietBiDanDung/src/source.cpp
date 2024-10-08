#include "../inc/ChiTiet.h"
#include "../inc/MayLanhHaiChieu.h"
#include "../inc/MayLanhMotChieu.h"
#include "../inc/HoaDon.h"
#include "../inc/DanhSachHoaDon.h"
#include "../inc/KhachHang.h"
#include "../inc/MayLanh.h"
#include "../inc/Quat.h"
#include "../inc/QuatDien.h"
#include "../inc/QuatDung.h"
#include "../inc/QuatHoiNuoc.h"
#include "../inc/ThietBiDanDung.h"

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    DanhSachHoaDon ds;
    ds.input();
    ds.output();
}