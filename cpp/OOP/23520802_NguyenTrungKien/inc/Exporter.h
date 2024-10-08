#pragma once
class DuAn;
#include "DuAn.h"
class Exporter
{
public:
    Exporter();
    virtual void xuatFile(DuAn*) = 0;
    virtual ~Exporter();
    friend class DuAn;
};