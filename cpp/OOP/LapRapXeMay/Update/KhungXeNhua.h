#pragma once
#include "KhungXe.h"
class KhungXeNhua : public KhungXe
{
public:
    KhungXeNhua();
    KhungXeNhua(std::string, std::string, std::string);
    void input() override;
    void output() override;
    ~KhungXeNhua();
};

