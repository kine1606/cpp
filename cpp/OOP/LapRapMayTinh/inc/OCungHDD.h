#pragma once
#include "OCung.h"
#include <string>

class OCungHDD : public OCung
{
public:
    OCungHDD();
    OCungHDD(std::string);
    void input() override;
    void output() override;
    ~OCungHDD();
};
