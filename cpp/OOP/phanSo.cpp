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
    x.mau = x.mau /c;
}
int main()
{
    phanSo phanSo;
    std::cin>> phanSo.tu >> phanSo.mau ;
    rutGon(phanSo);
    if(phanSo.mau !=1) 
    {
        std::cout << phanSo.tu << "/" << phanSo.mau <<'\n'; 
    }
    else 
    {
        std::cout<< phanSo.tu <<'\n';
    }
}