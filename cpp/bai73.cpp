// Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + 3 + ... + n > 10000
// by Kine1606
#include <iostream>
using namespace std;
int main()
{
    int S(0);
    for (int i = 1; i <5000; i++)
    {  
        S+=i;
        if (S>10000)
        {
            cout << S << '\n';
            cout << "number n is " << i;
            break;
        }
    }
    return 0;
}      