#pragma once
#include "Exporter.h"
#include "DuAn.h"
class BExporter : public Exporter
{
public:
    void xuatFile(DuAn*) override;
    BExporter();
    ~BExporter();
};