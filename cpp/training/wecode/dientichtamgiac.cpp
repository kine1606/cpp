// a b c tính Sabc
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int a,b,c;
    cin >> a >> b >> c;
    double p= (a+b+c)/2.0;
    cout << fixed << setprecision(2) << double (sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}