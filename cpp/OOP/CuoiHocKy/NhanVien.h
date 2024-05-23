#pragma once
#include <string>
class NhanVien
{
protected:
    std::string m_name;
    std::string m_address;
    std::string m_phoneNumb;    
public:
    NhanVien();
    NhanVien(std::string, std::string, std::string);
    virtual void input();
    virtual void output();
    virtual ~NhanVien();
};

class NhanVienThang : public NhanVien
{
private:
    long long m_salery;
public:
    NhanVienThang();
    NhanVienThang(std::string, std::string, std::string, long long);
    void input() override;
    void output() override;
    ~NhanVienThang();
};
class NhanVienGio : public NhanVien
{
private:
    int m_hourCount;
    int m_saleryPerHour;
public:
    NhanVienGio();
    NhanVienGio(std::string, std::string, std::string, int, int);
    void input() override;
    void output() override;
    ~NhanVienGio();
};
class NhanVienHoaHong : public NhanVien
{
private:
    long long m_sum;
    double m_rating;
public:
    NhanVienHoaHong();
    NhanVienHoaHong(std::string, std::string, std::string, long long, double);
    void input() override;
    void output() override;
    ~NhanVienHoaHong();
};