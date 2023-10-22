#include <iostream>
#include <cmath>
using namespace std;
double dequyhaha(int n)
{
    if (n==1)
    {
     return 1;
    }
    return sqrt(dequyhaha(n-1)+n);
}
int main()
{
    long int n;
    cin >> n;
    double S=0;
    // for (int i=1;i<=n;i++)
    // {
    //     S+=i; 
    //     S=sqrt(S);
    // }
    cout << dequyhaha(n) << " ";
    // cout << S;
}
