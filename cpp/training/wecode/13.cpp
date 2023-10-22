#include <iostream>
#include <cmath>
using namespace std;
int input ()
{
    int m;
    cin >> m;
    return m;
}
void input (int &b)
{
    cin >> b;
}
int TongUocChung (int& a, int& b)
{
    int index(0);
    if (a<b)
    index=b/2;
    else index=a/2;
    int sum(1);
    for (int i = 2; i <=index; i++)
    {
        if (a%i==0 && b%i==0)
        {
            sum+=i;
            continue;
        }
    }
    return sum;
}
int main()
{
    int a, b;
    a=input();
    input(b);
    std::cout << TongUocChung(a, b);
    return 0;
}
