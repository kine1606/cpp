// nhập vào giá tiền tính tổng số tờ tiền sao cho tờ tiền ít nhất
// by Kine1606
#include <iostream>
using namespace std;
void soTienXXX( unsigned int& x, unsigned int& y, unsigned int& z, unsigned int money)
{   
    if (money==0)  return;
    if (money>=5)
    {
        x++;
        money-=5;
        if (money==0)   return ;
    }
    while (money>=2 && money<5)
    {
        y++;
        money-=2;
        if (money==0)  return;
        
    }
    if (money<2)  z++;
    return;
}
int main()
{   
    unsigned int a(0),b(0),c(0),d(0),e(0),f(0),g(0),h(0),k(0);
    cout << "enter money (0<money<1000):";
    unsigned int money1;
    unsigned int money2,money3;
    cin >> money1;
    money3=money1;
    money2=money1;
    money1/=100;
    soTienXXX (a,b,c,money1);
    money2%=10;
    soTienXXX (g,h,k,money2);
    money3= money3 -money1*100 - money2;
    money3/=10;
    soTienXXX (d,e,f,money3);
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