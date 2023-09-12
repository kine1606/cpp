//Hãy tính tổng các chữ số chẵn của số nguyên dương n.
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
        array.push_back(n%10);
        if (array.back()%2==0 )
        {
            sum+=array.back();
        }

        n/=10;
    }
    cout << "sum all even elements of n= " << sum;
    return 0;
}