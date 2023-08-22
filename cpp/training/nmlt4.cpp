// nhap n , xuat s= 1 + 1.2 + 1.2.3 + 1.2.3...n; by Kine1606
#include <iostream>
using namespace std;
int main()
{
    int n;
    int s(0);
    int t(1);
    cout << " nhap so nguyen n=";
    do
    {
        cin>> n;
    } while (n<=5 || n>=100);

    for (int i = 1; i <= n; i++)
    {
        t= t*i; 
        s=s+t;
    }
    cout << "s= " << s;
}