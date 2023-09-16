//Tính S(x,n) = x - x2 + x3 + ... + (-1)n+1 xn
//by Kine1606
#include <iostream>
#include <cmath>
using namespace std;
int dequyhaha(int x, int n)
{
    if (n==0)
    {
        return 0;
    }
   
    return dequyhaha(x,n-1) +(pow(-1,n)*pow(x,n));
}
int main()
{
    cout << "enter integer x=";
    int x,n;
    cin >> x;
    cout << "enter integer n=";
    cin >> n;   
    cout << "all this stuff =" << dequyhaha(x,n);
    return 0;
}