#pragma once
#include <string>
#include "CPU.h"
#include "ManHinh.h"
#include "OCung.h"
#include "RAM.h"
class MayTinh
{
protected:
    std::string m_maMayTinh;
    std::string m_tenSanPham;
    long long m_donGia;
    CPU* m_CPU;
    RAM* m_RAM[2];
    ManHinh* m_manHinh;
    OCung* m_oCung;
public:
    MayTinh();
    virtual void input();
    virtual void output();
    ~MayTinh();
    friend class Ocung;
    friend class CPU;
    friend class RAM;
    friend class ManHinh;

};
