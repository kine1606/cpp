// nhập vào giá tiền tính tổng số tờ tiền sao cho tờ tiềnít nhất
// by Kine1606
#include <iostream>
using namespace std;
void soTienXXX( unsigned int& a, unsigned int& b, unsigned int& c, unsigned int money)
{   
    money=money/100;
    if (money==0)  return;
    if (money>=5)
    {
        a++;
        money-=5;
        if (money==0)   return ;
    }
    while (money>=2 && money<5)
    {
        b++;
        money-=2;
        if (money==0)  return;
        
    }
    if (money<2)  c++;
    return;
}
void soTienXX( unsigned int& d, unsigned int& e, unsigned int& f, unsigned int money,int sotien3)
{
    int sotien;
    sotien=money/100;
    money=money-(sotien*100)-sotien3;
    money/=10;
    cout << "money=" << money << '\n';
    if (money==0)  return;
    if (money>=5)
    {
        d++;
        money-=5;
        if (money==0)  return ;
    }
    while (money>=2 && money<5)
    {
        e++;
        money-=2;
        if (money==0)  return;
    }
    if (money<2)  f++;
    return;
}
void soTienX( unsigned int& g, unsigned int& h, unsigned int& k, unsigned int money, int& sotien3)
{
    int sotien1;
    int sotien2;
    sotien1 = money/100;
    money = money - (sotien1*100);
    sotien2 = money/10;
    money = money - (sotien2*10);
    sotien3 = money;
    cout << "money="<< money << '\n';
    if (money==0)  return;
    if (money>=5)
    {
        g++;
        money-=5;
        if (money==0)   return ;
    }
    while (money>=2 && money<5)
    {
        h++;
        money-=2;
        if (money==0)  return;
        
    }
    if (money<2)  k++;
    return;
}
int main()
{   
    unsigned int a(0),b(0),c(0),d(0),e(0),f(0),g(0),h(0),k(0);
    cout << "enter money (exam 500):";
    unsigned int money;
    int sotien3;
    cin >> money;
    soTienXXX (a,b,c,money);
    soTienX (g,h,k,money,sotien3);
    soTienXX (d,e,f,money,sotien3);
    cout << 500 <<" : "<< a << '\n';
    cout << 200 <<" : "<< b << '\n';
    cout << 100 <<" : "<< c << '\n';
    cout << 50 <<" : "<< d << '\n';
    cout << 20 <<" : "<< e << '\n';
    cout << 10 <<" : "<< f << '\n';
    cout << 5 <<" : "<< g<< '\n';
    cout << 2 <<" : "<< h << '\n';
    cout << 1 <<" : "<< k << '\n';
} 