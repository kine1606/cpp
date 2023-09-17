//by Kine1606
#include <iostream>
#include <cmath>
using namespace std;
int dequyhihi (int n)
{
    if (n==0)
    {
     return 0;
    }
    return dequyhihi(n-1)+n;
}
double dequyhaha (int x, int n)
{
    if (n==0)  return 0;
    return dequyhaha(x,n-1) + 1.0*pow(-1,n)*pow(x,n)/dequyhihi(n);
}
int main()
{
    int x,n;
    cout << "enter x=";
    cin>> x;
    cout << "enter n=";
    cin>>n;
    cout << "S(x,n)=" << dequyhaha(x,n);
    return 0;
}