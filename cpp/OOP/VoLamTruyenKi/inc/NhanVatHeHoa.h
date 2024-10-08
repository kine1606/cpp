#pragma once
#include "NhanVat.h"
class NhanVatHeHoa : public NhanVat
{
public:
    NhanVatHeHoa();
    int dmg_dealTo(Character*);
    void input() override;
    void output() override;
    ~NhanVatHeHoa();
};
