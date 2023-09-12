//Hãy tính tổng các chữ số của số nguyên dương n.
//by Kine1606
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n(0);
    cout << "enter n =";
    cin >> n;
    int sum(0);
    vector<int> array;
    while (n!=0)
    {
        sum+=n%10 ;
        n/=10;
    }
    cout << "sum all elements of n= " << sum;
    return 0;
}