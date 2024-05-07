#pragma once
#include <string>
class NhanVien
{
protected:
    std::string m_name;
    std::string m_dateOfBirth;
    long long m_basicSalery;
public:
    NhanVien();
    NhanVien(std::string, std::string, long long);
    std::string getName();
    virtual void input();
    virtual void output();
    virtual long long realSalery() = 0;
    virtual ~NhanVien() = default;
};


class NhanVienSanXuat : public NhanVien
{
private:
    int m_productCount;
public:
    NhanVienSanXuat();
    NhanVienSanXuat(std::string, std::string, long long, int);
    void input() override;
    void output() override;
    long long realSalery() override;
    ~NhanVienSanXuat();
};


class NhanVienVanPhong : public NhanVien
{
private:
    int m_workingDayCount;
    long long m_allowance;
public:
    NhanVienVanPhong();
    NhanVienVanPhong(std::string, std::string, long long, int, long long);
    void input() override;
    void output() override;
    long long realSalery() override;
    ~NhanVienVanPhong();
};


class NhanVienQuanLy : public NhanVien
{
private:
    int m_coeff;
    long long m_reward;
public:
    NhanVienQuanLy();
    NhanVienQuanLy(std::string, std::string, long long, int, long long);
    void input() override;
    void output() override;
    long long realSalery() override;
    ~NhanVienQuanLy();
};
