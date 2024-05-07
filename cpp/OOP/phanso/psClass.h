#pragma once
class Phan_So
{
public:
    Phan_So();
    Phan_So(int tu, int mau);

    void input();
    void output();

    int gcd(int a, int b);     
    void plus(const Phan_So& rhsPS);
    void minus(const Phan_So& rhsPS);
    void mult(const Phan_So& rhsPS);
    void div(const Phan_So& rhsPS);
    
    int compare(const Phan_So& ps);
    void clone (const Phan_So& ps);
    void simplified();
private:
    int m_tu;
    int m_mau;
};
