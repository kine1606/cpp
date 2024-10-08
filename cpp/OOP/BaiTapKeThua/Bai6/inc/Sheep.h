#pragma once
#include "Cattle.h"
class Sheep : public Cattle
{
private:
    /* data */
public:
    Sheep();
    Sheep(int, int);
    void speak() override;
    ~Sheep();
};
