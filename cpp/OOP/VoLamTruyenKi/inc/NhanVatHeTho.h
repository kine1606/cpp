#pragma once
#include "NhanVat.h"
class NhanVatHeTho : public NhanVat
{
public:
    NhanVatHeTho();
    int dmg_dealTo(Character*);
    void input() override;
    void output() override;
    ~NhanVatHeTho();
};
