#pragma once
#include "NhanVat.h"
class NhanVatHeMoc : public NhanVat
{
public:
    NhanVatHeMoc();
    int dmg_dealTo(Character*);
    void input() override;
    void output() override;
    ~NhanVatHeMoc();
};
