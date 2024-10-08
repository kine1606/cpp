#pragma once
#include "CPU.h"
#include <string>
class CPUcorei5: public CPU
{
public:
    CPUcorei5();
    CPUcorei5(std::string);
    ~CPUcorei5();
};