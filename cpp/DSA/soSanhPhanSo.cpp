#include <iostream>
struct phanSo
{
    int tu, mau;
};
int gcd (int x, int y)
{
    if(y==0) return x;
    return gcd(y,x%y);
}
void rutGon(phanSo &x)
{
    int c = gcd(x.tu, x.mau);
    x.tu = x.tu / c;
    x.mau = x.mau / c;
}
int main()
{
    phanSo phanSo1;
    phanSo phanSo2;
    std::cin>> phanSo1.tu >> phanSo1.mau >> phanSo2.tu >> phanSo2.mau;
    rutGon(phanSo1);
    rutGon(phanSo2);
    int x = phanSo1.tu / phanSo1.mau;
    int y = phanSo2.tu / phanSo2.mau;
    if(x>=y)
    {
        if(x==y)
            std::cout<< "Phan so 1 = phan so 2 ";
        else 
            std::cout<< "Phan so 1 > phan so 2 " ;
    }
    else 
        std::cout<< "Phan so 2 > phan so 1 ";
}