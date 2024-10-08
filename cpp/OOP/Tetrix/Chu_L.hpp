#pragma once
#include <vector>
#include <iostream>
#include <time.h>
//===============================================================================
class Chu_L {
public:
    virtual ~Chu_L() = default;
    virtual void Xuat() = 0;
    virtual void Nhap() = 0;
    virtual bool check() = 0;
    virtual void Dat() = 0;
};
class Chu_L_trai : public Chu_L{
public:
    Chu_L_trai() = default;
    virtual ~Chu_L_trai() = default;
    virtual void Xuat() = 0;
    virtual void Nhap() = 0;
    virtual bool check() = 0;
    virtual void Dat() = 0;
};
class Chu_L_trai_1 : public Chu_L_trai{
protected:
    std::vector<std::vector<bool>> list_L_trai_1;
    int dai, rong;
public:
    Chu_L_trai_1();
    ~Chu_L_trai_1() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_L_trai_2 : public Chu_L_trai{
protected:
    std::vector<std::vector<bool>> list_L_trai_2;
    int dai, rong;
public:
    Chu_L_trai_2();
    ~Chu_L_trai_2() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_L_trai_3 : public Chu_L_trai{
protected:
    std::vector<std::vector<bool>> list_L_trai_3;
    int dai, rong;
public:
    Chu_L_trai_3();
    ~Chu_L_trai_3() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_L_trai_4 : public Chu_L_trai{
protected:
    std::vector<std::vector<bool>> list_L_trai_4;
    int dai, rong;
public:
    Chu_L_trai_4();
    ~Chu_L_trai_4() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_L_phai : public Chu_L{
public:
    Chu_L_phai() = default;
    virtual ~Chu_L_phai() = default;
    virtual void Xuat() = 0;
    virtual void Nhap() = 0;
    virtual bool check() = 0;
    virtual void Dat() = 0;
};
class Chu_L_phai_1 : public Chu_L_phai{
protected:
    std::vector<std::vector<bool>> list_L_phai_1;
    int dai, rong;
public:
    Chu_L_phai_1();
    ~Chu_L_phai_1() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_L_phai_2 : public Chu_L_phai{
protected:
    std::vector<std::vector<bool>> list_L_phai_2;
    int dai, rong;
public:
    Chu_L_phai_2();
    ~Chu_L_phai_2() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_L_phai_3 : public Chu_L_phai{
protected:
    std::vector<std::vector<bool>> list_L_phai_3;
    int dai, rong;
public:
    Chu_L_phai_3();
    ~Chu_L_phai_3() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};
class Chu_L_phai_4 : public Chu_L_phai{
protected:
    std::vector<std::vector<bool>> list_L_phai_4;
    int dai, rong;
public:
    Chu_L_phai_4();
    ~Chu_L_phai_4() = default;
    void Xuat() override;
    void Nhap() override;
    bool check() override;
    void Dat() override;
};