#pragma once
#include "ManHinh.h"
#include <string>
class ManHinhGuong: public ManHinh
{
public:
    ManHinhGuong();
    ManHinhGuong(std::string);
    void input() override;
    void output() override;
    ~ManHinhGuong();
};
