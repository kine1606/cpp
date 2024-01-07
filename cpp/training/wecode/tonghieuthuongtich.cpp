// tinh tong hieu thuong tich cua 2 so nguyen a b
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b << '\n';
    cout << a << " - " << b << " = " << a-b << '\n';
    cout << a << " x " << b << " = " << a*b << '\n';
    cout << a << " : " << b << " = " << fixed << setprecision(2) << a/b;
    return 0;
}
