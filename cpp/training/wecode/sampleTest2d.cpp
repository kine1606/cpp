#include <iostream>
struct PhanSo
{
    int x;
    int y;
};
void Nhap(PhanSo &a)
{
    std::cin>> a.x >> a.y;
}
PhanSo Nhap()
{
    PhanSo b;
    std::cin>> b.x >> b.y ;
    return b;
}   
int gcd(int x, int y)         
{                               
    if(y==0) return x;   
    return gcd(y, x%y); 
}
PhanSo Tru(PhanSo a, PhanSo b)
{
    PhanSo c,d;
    if(a.x==0)
    { 
        d.x=b.x;
        d.y=b.y;
        return d;
    }
    else if(b.x==0)
    {
        d.x=a.x;
        d.y=a.y;
        return d;
    }
    else 
    {
        c.x = (a.x * b.y) - (b.x * a.y);
        c.y = b.y * a.y;
        if(abs(c.x) > abs(c.y))
        {
            d.x = c.x / gcd(abs(c.x), abs(c.y));
            d.y= c.y / gcd(abs(c.x), abs(c.y));
        }
        else 
        {
            d.x = c.x / gcd(abs(c.y), abs(c.x));
            d.y= c.y / gcd(abs(c.y), abs(c.x));
        }
        return d;
    }

}
void Xuat (PhanSo c)
{
    if(c.x % c.y == 0)
    {
        std::cout<< c.x / c.y <<'\n';
    }
    else if (c.y % c.x ==0)
    {
        std::cout << c.x / gcd(abs(c.y), abs(c.x))  << "/" << c.y / gcd(abs(c.y), abs(c.x));
    }
    else
    {
        std::cout<< c.x << "/" << c.y <<'\n';
    }
        
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Tru(a, b));
    return 0;
}
