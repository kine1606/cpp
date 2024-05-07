#include "psCLass.h"
class PhanSo
{

public:
    // default ctor (constructor)
    PhanSo() = default;
    // init ctor (constructor)
    PhanSo(int tu, int mau):m_tu(tu), m_mau(mau){}
    int gcd(int a, int b)
    {
    if(b==0) return a;
    return gcd(b, a%b);
    }
    // 'const &' is because PhanSo is not primitive type
    // primitive type is a type which has size smaller than 1 pointer size.
    // depend on which OS, i.e. window 32bit will has pointer size = 32bit (4 bytes)
    // here Phanso contains 2 integer (let's assume that 1 int = 4 bytes), so we
    // have 8 bytes in total > 4 bytes (size of pointer). Then use 'const &'
    void congPS(const PhanSo& rhsPs) // rhs -> right hand side
    {
        this->m_tu = this->m_tu * rhsPs.m_mau + rhsPs.m_tu*this->m_mau;
        this->m_mau = this->m_mau * rhsPs.m_mau;
    }

    void nhapPs()
    {
        std::cin >> m_tu;
        do
        {
            std::cin >> m_mau;
            if (m_mau == 0)
            {
                std::cout<<"Ngu, nhap lai mau cho tao! -> ";
            }
        } while (m_mau == 0);
        
    }

    void inPs()
    {
        std::cout<<this->m_tu<<"/"<<this->m_mau<<"\n";
    }

private:
    // 'm' stands for 'member' indicating that this variable belongs to being this class
    int m_tu = 0; // default value
    int m_mau = 1; // default value, mau != 0
};

int main()
{
    PhanSo ps1;
    std::cout<<"Nhap ps 1 -> ";
    ps1.nhapPs();
    PhanSo ps2;
    std::cout<<"Nhap ps 2 -> ";
    ps2.nhapPs();

    std::cout<<"Cong 2 phan so: ";
    ps1.congPS(ps2);
    ps1.inPs();
}