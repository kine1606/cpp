#include <iostream>
class psClass
{
public:
    psClass() = default;
    psClass(int tu, int mau):m_tu(tu), m_mau(mau){}
    void input() 
    {
        do
        {
            std::cin>> m_tu;
            std::cin>> m_mau ;
            if(m_mau == 0)  std::cout<< "Enter again!" << '\n';
        } while (m_mau == 0);
    }
    int gcd(int a, int b)
    {
        if(b==0) return a;
        return gcd(b, a%b);
    }
    // plus 2 fractions
    void plus(const psClass& rhsPS)
    {
        this->m_tu = this->m_tu * rhsPS.m_mau + this-> m_mau * rhsPS.m_tu;
        this -> m_mau = this->m_mau * rhsPS.m_mau;
    }
    // minus 2 fractions
    void minus(const psClass& rhsPS)
    {
        this->m_tu = this->m_tu * rhsPS.m_mau - this-> m_mau * rhsPS.m_tu;
        this -> m_mau = this->m_mau * rhsPS.m_mau;       
    }
    // mult 2 fractions
    void mult(const psClass& rhsPS)
    {
        this->m_tu = this->m_tu * rhsPS.m_tu;
        this -> m_mau = this->m_mau * rhsPS.m_mau;           
    }
    // div 2 fractions
    void div(const psClass& rhsPS)
    {
        this->m_tu = this->m_tu * rhsPS.m_mau;
        this -> m_mau = this->m_mau * rhsPS.m_tu;    
    }
    // compare 2 fractions
    int compare(const psClass& ps)
    {
        double x = this->m_tu*1.0 / this->m_mau*1.0;
        double y = ps.m_tu*1.0 / ps.m_mau*1.0;
        if(x > y) return 1;
        else if (x == y) return 0;
        else return -1;
        return 1;
    }
    // clone object
    void clone (const psClass& ps)
    {
        this -> m_tu = ps.m_tu;
        this -> m_mau = ps.m_mau;
    }
    void simplified()
    {
        int ucln = gcd (m_tu, m_mau);
        m_tu = m_tu / ucln;
        m_mau = m_mau / ucln;
    }
    void output()
    {
        if(m_mau < 0 && m_tu > 0)
            std::cout<< -m_tu << "/" << -m_mau <<'\n';
        else if(m_mau != 1)
            std::cout<< m_tu << "/" << m_mau <<'\n';
        else 
            std::cout<< m_tu <<'\n';

    }
private:
    int m_tu;
    int m_mau;
};
int main()
{   
    psClass ps1;
    std::cout<< "Enter first: " ;
    ps1.input();

    std::cout<< "Enter second: " ;
    psClass ps2;
    ps2.input();
    
    // tinh tong 2 phan so 
    std::cout<< "Sum :";
    psClass tong;
    tong.clone(ps1);
    tong.plus(ps2);
    tong.simplified();
    tong.output();

    // tinh hieu 2 phan so
    std::cout << "Difference: ";
    psClass hieu;
    hieu.clone(ps1);
    hieu.minus(ps2);
    hieu.simplified();
    hieu.output();

    // tinh tich 2 phan so 
    std::cout << "Multiple: ";
    psClass tich;
    tich.clone(ps1);
    tich.mult(ps2);
    tich.simplified();
    tich.output();

    //tinh thuong 2 phan so 
    std::cout << "Division: ";
    psClass thuong;
    thuong.clone(ps1);
    thuong.div(ps2);
    thuong.simplified();
    thuong.output();

    // so sanh 2 phan so 
    psClass cmp;
    int check = ps1.compare(ps2);
    if(check == 1) std::cout<< "ps1 > ps2" <<'\n';
    else if(check == 0) std::cout<< "ps1 = ps2" <<'\n';
    else std::cout<< "ps1 < ps2" <<'\n';
}