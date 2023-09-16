// tính tổng S(n)= 1-(1/1+2) +... (-1)^(n+1)/(1+2+...+n)
//by Kine1606
#include <iostream>
#include <cmath>
using namespace std;
int tong(int n)
{
    if (n==0)  return 0;
    return tong(n-1)+n;
}
double dequyhaha(int n)
{
    if(n==0) return 0;
    return dequyhaha(n-1) + 1.0*pow(-1,n+1)/(tong(n));
}
int main()
{
    int n;
    cout << "enter n=";
    cin >> n;
    cout <<"S(n)=" << dequyhaha(n);
    return 0;
}