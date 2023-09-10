/********************************************************************
Cho n là số nguyên dương, hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k) < n.
Trong đó chuỗi S(k) được định nghĩa như sau: S(k) = 1 + 2 + 3 + ... + k 
by Kine1606
*********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n(0);
    cout << " enter positive n=";
    cin>>n;
    int count(0);
    int sum(0);
    int i(1);
    while (1)
    {
        sum+=i;
        if (sum>=n)
        {
            break;
        }
        i++;
        count++;
    }
    cout << " the largest k is " << count ;
    return 0;
}