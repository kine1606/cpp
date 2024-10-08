#pragma once
#include "CPU.h"
#include <string>
class CPUcorei7: public CPU
{
public:
    CPUcorei7();
    CPUcorei7(std::string);
    ~CPUcorei7();
};