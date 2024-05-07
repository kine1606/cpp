#pragma once
class PhanSo
{
public:
    PhanSo();
    PhanSo(int, int);
    void input();
    void output() const;

    PhanSo getPhanSo() const;
    int getTuSo() const;
    int getMauSo() const;

    void setPhanSo(int, int);
    void setTuSo(const int&);
    void setMauSo(const int&);
    void random_setPhanSo();
    
    int gcd(int, int) const ;     
    void simplified();
    void setPhanSo();
    bool isPrime() const;
    ~PhanSo();
private:
    int m_tu;
    int m_mau;
    double data;
    friend class arrPhanSo;
};

class arrPhanSo
{
public:
    arrPhanSo();
    arrPhanSo(int);

    void inputArrPS();
    void random_inputArrPS();
    void outputArrPS();

    void simplified();
    PhanSo MAX();
    void sortArr();
    int PrimeCount();
    ~arrPhanSo();
private:

    int m_number;
    PhanSo* m_arrPS;
};