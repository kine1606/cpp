//Hãy tính tích các chữ số của số nguyên dương n.
//by Kine1606
#include <iostream>
using namespace std;
int main()
{
    long long n(0);
    cout << "enter n =";
    cin >> n;
    int multiple(1);
    while (n!=0)
    {
        multiple*=n%10;
        n/=10;
    }
    cout << "multiple all elements of n= " << multiple;
    return 0;
}