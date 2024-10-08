#pragma once
#include <vector>
#include <iostream>
#include <time.h>
//===============================================================================
class Chu_I {
public:
    Chu_I() = default;
    virtual ~Chu_I() = default;
    virtual void Xuat() = 0;
    virtual void Nhap() = 0;
    virtual bool check() = 0;
    virtual void Dat() = 0;

};

class Chu_I_dung : public Chu_I {
protected:
    std::vector<std::vector<bool>> list_I_dung;
    int dai, rong;
public:
    Chu_I_dung();
    ~Chu_I_dung() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};

class Chu_I_ngang : public Chu_I {
protected:
    std::vector<std::vector<bool>> list_I_ngang;
    int dai, rong;
public:
    Chu_I_ngang();
    ~Chu_I_ngang() = default;
    Chu_I_ngang(const Chu_I_dung& chu_i_dung);
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};