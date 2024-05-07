#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    n>>=31;
    if(n)
    {
        cout << "n is negative";
    }
    else cout << "n is positive";
}
