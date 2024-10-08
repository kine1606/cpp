#pragma once
#include <vector>
#include <iostream>
#include <time.h>
//===============================================================================
class HinhVuong{
protected:
    std::vector<std::vector<bool>> list_HV;
    int dai, rong;
public:
    HinhVuong();
    virtual ~HinhVuong() = default;
    void Xuat();
    void Nhap();
    bool check();
    void Dat();
};