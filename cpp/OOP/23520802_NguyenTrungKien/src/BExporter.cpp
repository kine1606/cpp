#include "../inc/BExporter.h"
#include "../inc/DuAn.h"
#include <fstream>
BExporter::BExporter() = default;
void BExporter::xuatFile(DuAn* rhsDA)
{
    std::string temp = rhsDA->getMaSo() + "_B.txt";
    const char* myFile = temp.c_str();
    freopen(myFile, "w", stdout);
}
BExporter::~BExporter(){}