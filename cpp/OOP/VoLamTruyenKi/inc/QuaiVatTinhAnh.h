#pragma once
#include "QuaiVat.h"
class QuaiVatTinhAnh : public QuaiVat
{
public:
    QuaiVatTinhAnh();
    int dmg_dealTo(Character*) override;
    void input() override;
    
    ~QuaiVatTinhAnh();
};
