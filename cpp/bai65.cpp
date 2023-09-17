#include <iostream>
#include <cmath>
using namespace std;
int dequygiaithua(int n)
{
    if (n==0) return 1;
    return dequygiaithua(n-1)*n;
}
double dequyhaha(int x, int n)
{
    if(n==0) return 0;
    return dequyhaha(x,n-1)+1.0*(pow(-1,n)*pow(x,n))/dequygiaithua(n);
}
int main()
{
    cout << "enter x=";
    double x,n;
    cin>>x;
    cout << "enter n=";
    cin>> n;
    cout << "S(x,n)=" << dequyhaha(x,n);
    return 0;
}