#pragma once
#include "CPU.h"
#include <string>
class CPUcorei3: public CPU
{
public:
    CPUcorei3();
    CPUcorei3(std::string);
    ~CPUcorei3();
};