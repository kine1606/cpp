#pragma once
#include "Cattle.h"
class Goat : public Cattle
{
private:
    /* data */
public:
    Goat();
    Goat(int, int);
    void speak() override;
    ~Goat();
};
