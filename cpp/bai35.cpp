//Tính S(n) = √𝑛+ √𝑛−1+√𝑛− 2 + ⋯ √2 + √1  có n dấu căn
// by Kine1606
#include <iostream>
#include <cmath>
using namespace std;
double sqrtofsum(int n)
{
    if (n==0) return 0;
    return sqrt(n + sqrtofsum(n-1));
}
int main()
{
    int n(0);
    cout << " enter positive n =";
    cin >> n;
    cout <<sqrtofsum(n);
    return 0;
}