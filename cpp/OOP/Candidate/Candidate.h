#pragma once
#include <string>
class Candidate
{
public:
    Candidate();
    Candidate(int MSSV, std::string name, double math, double literature, double engrisk);
    void input();
    void output();
    void rank();
    ~Candidate();
private:
    int m_MSSV;
    std::string m_name;
    double m_math;
    double m_literature;
    double m_engrisk;
    double m_average;
    double m_sumary;
    friend class TestCandidate;
};
