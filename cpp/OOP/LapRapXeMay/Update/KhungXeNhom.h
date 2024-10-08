#pragma once
#include "KhungXe.h"
class KhungXeNhom : public KhungXe
{
public:
    KhungXeNhom();
    KhungXeNhom(std::string, std::string, std::string);
    void input() override;
    void output() override;
    ~KhungXeNhom();
};

