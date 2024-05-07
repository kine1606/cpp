#pragma once
class data
{
public:
    double m_coeff;
    unsigned int m_deg;
};
class mono
{
public:
    data m_dt;
    mono* pNext;
public:
    mono(data); //create 
};
class poli
{
public:
    mono* head;
    mono* tail;
public:
    poli();
    bool isEmpty();
    void addTail(mono*);
    void printPoli();
    double CalcX(double);
};