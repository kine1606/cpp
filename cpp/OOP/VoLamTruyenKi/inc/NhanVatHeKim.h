#pragma once
#include "NhanVat.h"
class NhanVatHeKim : public NhanVat
{
public:
    NhanVatHeKim();
    int dmg_dealTo(Character*);
    void input() override;
    void output() override;
    ~NhanVatHeKim();
};
