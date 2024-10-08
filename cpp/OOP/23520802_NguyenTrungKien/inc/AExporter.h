#pragma once
#include "Exporter.h"
#include "DuAn.h"
class AExporter : public Exporter
{
public:
    void xuatFile(DuAn*) override;
    AExporter();
    ~AExporter();
};