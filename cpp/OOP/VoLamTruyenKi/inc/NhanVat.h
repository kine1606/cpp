#pragma once
#include "Character.h"

class NhanVat : public Character
{
public:
    NhanVat();
    int dmg_dealTo(Character*);
    void input() override;
    void output() override;
    ~NhanVat();
};
