#include "../inc/AExporter.h"
#include "../inc/DuAn.h"
AExporter::AExporter() = default;
void AExporter::xuatFile(DuAn* rhsDA)
{
    std::string temp = rhsDA->getMaSo() + "_A.txt";
    const char* myFile = temp.c_str();
    freopen(myFile, "w", stdout);
}
AExporter::~AExporter(){}