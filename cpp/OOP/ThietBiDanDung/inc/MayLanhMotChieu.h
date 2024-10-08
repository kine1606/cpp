#pragma once
#include "MayLanh.h"

class MayLanhMotChieu :public MayLanh
{
public:
    MayLanhMotChieu();
    // MayLanhMotChieu(std::string, std::string, std::string);
    void input() override;
    void output() override;

    long long getDonGia() override;
    ~MayLanhMotChieu();
};