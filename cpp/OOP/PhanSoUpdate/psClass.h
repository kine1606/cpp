#pragma once
#include <iostream>
class Phan_So
{
public:
    Phan_So();
    Phan_So(int tu);
    Phan_So(int tu, int mau);

    void setPS(int, int);
    void setTu(int);
    void setMau(int);
    int getTu();
    int getMau();
    Phan_So getPS();
    
    Phan_So operator+(const Phan_So& rhsPS);
    Phan_So operator-(const Phan_So& rhsPS);
    Phan_So operator/(const Phan_So& rhsPS);
    Phan_So operator*(const Phan_So& rhsPS);
    bool operator>=(const Phan_So& rhsPS);
    bool operator<=(const Phan_So& rhsPS);
    bool operator>(const Phan_So& rhsPS);
    bool operator<(const Phan_So& rhsPS);
    bool operator==(const Phan_So& rhsPS);
    bool operator!=(const Phan_So& rhsPS);

    friend std::istream& operator>> (std::istream& in, Phan_So& x);
    friend std::ostream& operator<< (std::ostream& out, const Phan_So& x);
    friend int gcd(int a, int b);     

    int compare(const Phan_So& ps);
    void clone (const Phan_So& ps);
    void simplified();
private:
    int m_tu;
    int m_mau;
};
