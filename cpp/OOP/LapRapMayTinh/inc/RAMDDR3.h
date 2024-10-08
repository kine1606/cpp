#pragma once
#include "RAM.h"
#include <string>
class RAMDDR3 : public RAM
{
public:
    RAMDDR3();
    RAMDDR3(std::string, int);
    void output() override;
    ~RAMDDR3();
};
