#include <iostream>
using namespace std;
int main ()
{
    long double a,b,c;
    cout << "enter a=";
    cin>> a;
    cout << "enter b=";
    cin>>b;
    cout << "enter c=";
    cin>> c;
    if (a<0) cout << -a << '\n';
    else cout << a << '\n';
    if (b<0) cout << -b << '\n';
    else cout << b << '\n';
    if (c<0) cout << -c << '\n';
    else cout << c;
    return 0;
}