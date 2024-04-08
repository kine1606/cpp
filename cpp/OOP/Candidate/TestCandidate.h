#pragma once
#include "Candidate.h"
class TestCandidate
{
private:
    int m_sz;
    Candidate* listCandidate;
public:
    TestCandidate();
    TestCandidate(int);
    void input_list();
    void output_list();
    int aboveAverage();
    ~TestCandidate();
};
