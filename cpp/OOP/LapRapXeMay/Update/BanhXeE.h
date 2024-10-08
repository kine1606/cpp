#pragma once
#include "BanhXe.h"
class BanhXeE : public BanhXe
{
public:
    BanhXeE();
    BanhXeE(std::string, std::string, std::string);
    void input() override;
    void output() override;
    ~BanhXeE();
};

