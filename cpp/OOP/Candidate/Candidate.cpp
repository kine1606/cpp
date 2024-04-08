#include "Candidate.h"
#include "TestCandidate.h"
#include <iostream>
#include <string>
Candidate::Candidate(){};
// init constructor
Candidate::Candidate(int MSSV, std::string name, double math, double literature, double engrisk)
{
    m_MSSV = MSSV;
    m_name = name;
    m_math = math;
    m_literature = literature;
    m_engrisk = engrisk;
    m_sumary = m_math + m_literature + m_engrisk;
    m_average = m_sumary/3;
}
void Candidate::input()
{
    std::cout<< "Nhap MSSV: ";
    std::cin>> m_MSSV ;
    std::cout<< "Nhap ho ten: ";
    std::cin.ignore();
    std::getline(std::cin, m_name);

    do
    {
        std::cout<< "Nhap diem toan: ";
        std::cin>> m_math;
    } while (m_math < 0 || m_math > 10);

    do
    {
        std::cout<< "Nhap diem van: ";
        std::cin>> m_literature;
        if(m_literature < 0 || m_literature > 10) std::cout<< "Nhap lai diem van: ";
    } while (m_literature < 0 || m_literature > 10);

    do
    {
        std::cout<< "Nhap diem anh: ";
        std::cin>> m_engrisk;
        if(m_engrisk < 0 || m_engrisk > 10) std::cout<< "Nhap lai diem anh: ";
    } while (m_engrisk < 0 || m_engrisk> 10);
    m_sumary = m_math + m_literature + m_engrisk;
    m_average = m_sumary/3;
}
void Candidate::output()
{
    std::cout<< "=========================================" <<'\n';
    std::cout<< "MSSV: " << m_MSSV <<'\n';
    std::cout<< "Ho va ten: " << m_name <<'\n';
    std::cout<< "Diem Toan: " << m_math <<'\n';
    std::cout<< "Diem Van: "  << m_literature <<'\n';
    std::cout<< "Diem Anh: " << m_engrisk <<'\n';
    std::cout<< "Tong diem: " << m_sumary <<'\n';
    std::cout<< "Diem trung binh: " << m_average <<'\n';
}
void Candidate::rank()
{
    std::cout<< "Hoc luc: " ;
    if(m_average < 5.0) std::cout<< "Kem";
    else if( 5.0 <= m_average < 6.5) std::cout<< "Trung binh" ;
    else if(6.5 <= m_average < 8.0) std::cout << "Tien tien";
    else if(8.0 <= m_average < 9.5) std::cout << "Gioi";
    else std::cout<< "Xuat sac";
}
Candidate::~Candidate(){}

//////////////////////////////////////////////////////////////////////

TestCandidate::TestCandidate()
{
    std::cout<< "Nhap so sinh vien: ";
    std::cin>> m_sz ;
    listCandidate = new Candidate[m_sz];
}
TestCandidate::~TestCandidate(){}
TestCandidate::TestCandidate(int sz):m_sz(sz), listCandidate(new Candidate[m_sz]){}
void TestCandidate::input_list()
{
    for (size_t i = 0; i < m_sz; i++)
    {
        listCandidate[i].input();
    }
}
void TestCandidate::output_list()
{
    for (size_t i = 0; i < m_sz; i++)
    {
        listCandidate[i].output();
    }
}
int TestCandidate::aboveAverage()
{
    int count(0);
    for (size_t i = 0; i < m_sz; i++)
    {
        if(listCandidate[i].m_sumary > 15)
            count++;
    }
    return count;
}