#pragma once
#include "NhanVat.h"
class NhanVatHeThuy : public NhanVat
{
public:
    NhanVatHeThuy();
    int dmg_dealTo(Character*);
    void input() override;
    void output() override;
    ~NhanVatHeThuy();
};
