#pragma once
#include "Character.h"

class QuaiVat : public Character
{
public:
    QuaiVat();
    int dmg_dealTo(Character*) override;
    void input() override;
    void output() override;
    ~QuaiVat();
};
