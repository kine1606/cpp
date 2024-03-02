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
phanSo operator+ (phanSo x, phanSo y)
{
    phanSo c;
    c.tu = x.tu * y.mau + y.tu * x.mau;
    c.mau = y.mau * x.mau;
    return c;
}
phanSo operator- (phanSo x, phanSo y)
{
    phanSo c;
    c.tu = x.tu * y.mau - (y.tu * x.mau);
    c.mau = y.mau * x.mau;
    return c;
}
phanSo operator* (phanSo x, phanSo y)
{
    phanSo c;
    c.tu = x.tu * y.tu ;
    c.mau = y.mau * x.mau;
    return c;
}
phanSo operator/ (phanSo x, phanSo y)
{
    phanSo c;
    c.tu = x.tu * y.mau;
    c.mau = y.tu * x.mau;
    return c;
}
int main()
{
    phanSo phanSo1;
    phanSo phanSo2;
    std::cin>> phanSo1.tu >> phanSo1.mau >> phanSo2.tu >> phanSo2.mau;
    phanSo tong = phanSo1 + phanSo2;
    phanSo hieu = phanSo1 - phanSo2;
    phanSo tich = phanSo1 * phanSo2;
    phanSo thuong = phanSo1 / phanSo2;
    rutGon(tong);
    rutGon(hieu);
    rutGon(tich);
    rutGon(thuong);
    
    if(tong.mau != 1 ) 
        std::cout<< "Tong 2 phan so = " << tong.tu << "/" << tong.mau <<'\n';
    else 
        std::cout<< "Tong 2 phan so = " << tong.tu <<'\n';
    
    if(hieu.mau != 1 )
        std::cout<< "Hieu 2 phan so = " << hieu.tu << "/" << hieu.mau <<'\n';
    else
        std::cout<< "Hieu 2 phan so = " << hieu.tu <<'\n';
    
    if(tich.mau != 1 )
        std::cout<< "Tich 2 phan so = " << tich.tu << "/" << tich.mau <<'\n';
    else
        std::cout<< "Tich 2 phan so = " << tich.tu <<'\n';
    
    if(thuong.mau != 1 )
        std::cout<< "Thuong 2 phan so = " << thuong.tu << "/" << thuong.mau <<'\n';
    else
        std::cout<< "Thuong 2 phan so = " << thuong.tu <<'\n';

}