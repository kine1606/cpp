#include <iostream>
using namespace std;
int main()
{
    int x,n;
    long int tu=1,mau=0;
    double S=0;
    cin>> x >> n;
    for (int i = 1; i <=n; i++)
    {
        tu*=-x; mau+=i;
        S+=(double) tu/mau;
    }
    cout<< S;
}