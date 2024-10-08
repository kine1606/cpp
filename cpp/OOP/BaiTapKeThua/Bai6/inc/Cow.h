#pragma once
#include "Cattle.h"
class Cow : public Cattle
{
private:
    /* data */
public:
    Cow();
    Cow(int, int);
    void speak() override;
    ~Cow();
};
