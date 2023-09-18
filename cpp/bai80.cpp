//Nhập vào 3 số thực, hãy in 3 số thực ấy ra màn hình theo thứ tự tăng dần mà chỉ dùng tối đa hai biến phụ.
// by Kine1606
#include <iostream>
using namespace std;
int main ()
{
    long double a,b,c;
    cout << "enter a=";
    cin>> a;
    cout << "enter b=";
    cin>>b ;
    cout << "enter =c";
    cin>> c;
    long double MAX=a;
    if (MAX<b)
    {
        if (b<c)
        {
            cout << c << " " << b << " " << a;
        }                                                                           
    }
     else
    {
        if ( MAX <c)
        {
            cout << c << " " << a << " " << b;
        }
        else if (b<c)
        {
            cout << a << " " << c << " " << b;
        }
        else cout << a << " " << b << " " << c;
    }
    return 0;
}