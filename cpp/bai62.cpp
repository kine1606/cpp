// n chẵn tính S(x,n)= -x^2 +x^4... (-1)^n/2 .x^n
// by Kine1606
#include <iostream>
#include <cmath>
using namespace std;
int dequyhaha(int x, int n)
{
    if (n<1)
    {
        return 0;
    }
    return dequyhaha(x,n/2)+ pow(-1,n/2)*pow(x,n);
}
int main()
{
    int n,x;
    cout << "enter x=";
    cin>> x;
    do
    {
        cout<< "enter n=";
        cin>>n;
    } while (n%2!=0);
    cout << "S(x,n)=" << dequyhaha(x,n);
}