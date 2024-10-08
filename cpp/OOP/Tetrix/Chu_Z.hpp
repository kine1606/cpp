#pragma once
#include <vector>
#include <iostream>
#include <time.h>
//===============================================================================
class Chu_Z {
public:
    Chu_Z() = default;
    virtual ~Chu_Z() = default;
    virtual void Xuat() = 0;
    virtual void Nhap() = 0;
    virtual bool check() = 0;
    virtual void Dat() = 0;
};
class Chu_Z_trai : public Chu_Z{
public:
    Chu_Z_trai() = default;
    virtual ~Chu_Z_trai() = default;
    virtual void Xuat() = 0;
    virtual void Nhap() = 0;
    virtual bool check() = 0;
    virtual void Dat() = 0;
};
class Chu_Z_trai_1 : public Chu_Z_trai{
protected:
    std::vector<std::vector<bool>> list_Z_trai_1;
    int dai, rong;
public:
    Chu_Z_trai_1();
    ~Chu_Z_trai_1() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_Z_trai_2 : public Chu_Z_trai{
protected:
    std::vector<std::vector<bool>> list_Z_trai_2;
    int dai, rong;
public:
    Chu_Z_trai_2();
    ~Chu_Z_trai_2() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_Z_phai : public Chu_Z{
public:
    Chu_Z_phai() = default;
    virtual ~Chu_Z_phai() = default;
    virtual void Xuat() = 0;
    virtual void Nhap() = 0;
    virtual bool check() = 0;
    virtual void Dat() = 0;
};
class Chu_Z_phai_1 : public Chu_Z_phai{
protected:
    std::vector<std::vector<bool>> list_Z_phai_1;
    int dai, rong;
public:
    Chu_Z_phai_1();
    ~Chu_Z_phai_1() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_Z_phai_2 : public Chu_Z_phai{
protected:
    std::vector<std::vector<bool>> list_Z_phai_2;
    int dai, rong;
public:
    Chu_Z_phai_2();
    ~Chu_Z_phai_2() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};