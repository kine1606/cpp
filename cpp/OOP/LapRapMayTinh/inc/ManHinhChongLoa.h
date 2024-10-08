#pragma once
#include "ManHinh.h"
#include <string>
class ManHinhChongLoa: public ManHinh
{
protected: 
    int m_tieuChuan;
public:
    ManHinhChongLoa();
    ManHinhChongLoa(std::string);
    void input() override;
    void output() override;
    ~ManHinhChongLoa();
};
