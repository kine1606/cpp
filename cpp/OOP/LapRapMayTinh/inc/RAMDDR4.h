#pragma once
#include "RAM.h"
#include <string>
class RAMDDR4 : public RAM
{
public:
    RAMDDR4();
    RAMDDR4(std::string, int);
    void output() override;
    ~RAMDDR4();
};
