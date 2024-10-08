#pragma once
#include "BanhXe.h"
class BanhXeD : public BanhXe
{
public:
    BanhXeD();
    BanhXeD(std::string, std::string, std::string);
    void input() override;
    void output() override;
    ~BanhXeD();
};

