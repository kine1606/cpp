#include <iostream>
#include <stack>
const int MAXN = 1 + 1e5;
class psClass
{
public:
    psClass()=default;
    psClass(int tu, int mau):m_tu(tu),m_mau(mau){};
    void input() 
    {
        do
        {
            std::cin>> m_tu;
            std::cin>> m_mau ;
            if(m_mau == 0)  std::cout<< "Enter again!" << '\n';
        } while (m_mau == 0);
    }

    // ucln
    int gcdMau(const psClass& rhsPS)
    {
        int mau1 = this->m_mau;
        int mau2 = rhsPS.m_mau;
        while(mau1 != mau2)
        {
            if (mau1 > mau2)
                mau1 = mau1 - mau2;
            else 
                mau2 = mau2 - mau1;
        }
        return mau1;
    }

    int gcdSimply(const psClass& rhsPS)
    {
        int mau1 = this->m_tu;
        int mau2 = rhsPS.m_mau;
        while(mau1 != mau2)
        {
            if (mau1 > mau2)
                mau1 = mau1 - mau2;
            else 
                mau2 = mau2 - mau1;
        }
        return mau1;        
    }
    // bcnn
    void lcm(const psClass& rhsPS)
    {
        this-> m_mau = (this->m_mau * rhsPS.m_mau) / gcdMau(rhsPS);
    }

    void clone (const psClass& rhsPS)
    {
        // this->m_tu = rhsPS.m_tu; 
        this->m_mau = rhsPS.m_mau;
    }

    //quy dong tu so 
    void quydong(const psClass& rhsPS)
    {
        this-> m_tu += this->m_mau / rhsPS.m_mau * rhsPS.m_tu;
    }

    // rut gon phan so 
    void simplified(const psClass& rhsPS)
    {
        int x = gcdSimply(rhsPS);
        this-> m_tu = this->m_tu / x;
        this ->m_mau = this->m_mau / x;
    }

    //so sanh phan so
    bool compare(const psClass& rhsPS)
    {
        double x = double (this->m_tu / this->m_mau);
        double y = double (rhsPS.m_tu/rhsPS.m_mau);
        if(x <= y)
        {
            this-> m_tu = rhsPS.m_tu;
            this-> m_mau = rhsPS.m_mau;
            return true;
        }
        return false;
    }
    void output()
    {
        if(m_tu == 0)
            std::cout<< 0 <<'\n';
        else if(m_mau <0 && m_tu >0)
            std::cout<< -(this->m_tu) << "/" << -(this->m_mau) <<'\n';
        else if(m_mau !=1) 
            std::cout<< this->m_tu << "/" << this->m_mau <<'\n';
        else   
            std::cout<< this->m_tu <<'\n';
    }
private:
    int m_tu = 0;
    int m_mau = 1;
};
int main()
{
    std::stack <int> index;
    psClass psList[MAXN];
    int n;
    std::cin>> n ;
    for (size_t i = 0; i < n; i++)
    {
        psList[i].input();
    }

    // tinh tong 
    psClass clone;
    clone.clone(psList[0]);
    for (size_t i = 1; i < n; i++)
    {
        clone.lcm(psList[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        clone.quydong(psList[i]);
    }
    clone.simplified(clone);
    std::cout<< "Tong: ";
    clone.output();

    // so sanh phan so 
    psClass min(-999,1);
    for (size_t i = 0; i < n; i++)
    {
        if(min.compare(psList[i]))
        {
            index.push(i);
        }
    }
    std::cout<< "Phan so lon nhat: ";
    psList[index.top()].output();
}