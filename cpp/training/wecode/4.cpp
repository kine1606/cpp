#include <iostream>
using namespace std;
int TongLe1 (long int n)
{
    int sum(0);
    while(n!=0)
    {
        sum+=n;
        n-=2;
        if (n<0)
        return sum;
    }
    return sum;
}
void TongLe2 (long int n, long int &sum)
{
    while (n!=0)
    {
        sum+=n;
        n-=2;
        if (n<0)
            return;
    }
    return;
}
int main()
{
    long int m;
    cout << "enter m=";
    cin >> m;
    if (m%2==0)
        m-=1;
    cout << TongLe1(m) << '\n';
    long int sum(0);
    TongLe2(m, sum);
    cout << sum;
    return 0;
}