#include "Candidate.h"
#include "TestCandidate.h"
#include <iostream>
int main()
{
    TestCandidate hihi;
    hihi.input_list();
    hihi.output_list();
    std::cout<< "Co " << hihi.aboveAverage() << "sinh vien co tong tren 15 diem";
}