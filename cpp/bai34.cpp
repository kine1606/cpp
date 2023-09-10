//Tính S(n) = √2 + √2+√2 + ⋯ √2 + √2  có n dấu căn
// by Kine1606
#include <iostream>
#include <cmath>
using namespace std;
double sqrtof2(int n)
{
    if (n==0) return 0;
    return sqrt((2)+ sqrtof2(n-1));
}
int main()
{
    int n(0);
    cout << " enter positive n=";
    cin>> n;
    cout << sqrtof2(n);
    return 0;
}