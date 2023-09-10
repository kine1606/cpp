//Hãy đếm số lượng chữ số của số nguyên dương n.
//by Kine1606
#include <iostream>
using namespace std;
int main()
{
    long long n(0);
    cout << " enter n =";
    cin >> n;
    int count (1);
    for (int i = 10; i <n; i*=10)
    {
        if (n/i !=0)
        {
            count++;
        }
        else break;
    }
    cout << n << " have " << count << " number(s)";
    return 0;
}