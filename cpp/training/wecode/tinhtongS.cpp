#include <iostream>
using namespace std;
int tongS(int n)
{
    if (n==1) return 1; 
    return tongS(n-1)+n;
}
int main()
{
    int n;
    cout << "enter n=";
    cin >> n;
    cout << tongS(n);
    return 0;
}
