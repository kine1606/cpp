#pragma once
#include <vector>
#include <iostream>
#include <time.h>
//===============================================================================
class Chu_T{
public:
    Chu_T() = default;
    virtual ~Chu_T() = default;
    virtual void Xuat() = 0;
    virtual void Nhap() = 0;
    virtual bool check() = 0;
    virtual void Dat() = 0;
};
class Chu_T_1 : public Chu_T{
protected:
    std::vector<std::vector<bool>> list_T_1;
    int dai, rong;
public:
    Chu_T_1();
    ~Chu_T_1() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_T_2 : public Chu_T{
protected:
    std::vector<std::vector<bool>> list_T_2;
    int dai, rong;
public:
    Chu_T_2();
    ~Chu_T_2() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_T_3 : public Chu_T{
protected:
    std::vector<std::vector<bool>> list_T_3;
    int dai, rong;
public:
    Chu_T_3();
    ~Chu_T_3() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_T_4 : public Chu_T{
protected:
    std::vector<std::vector<bool>> list_T_4;
    int dai, rong;
public:
    Chu_T_4();
    ~Chu_T_4() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};