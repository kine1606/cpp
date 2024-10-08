#pragma once
#include "OCung.h"
#include <string>

class OCungSSD : public OCung
{
public:
    OCungSSD();
    OCungSSD(std::string);
    void input() override;
    void output() override;
    ~OCungSSD();
};
