// so Armstrong ? by Kine1606
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool isArmstrong (int a)
{
    const long long b=a;
    vector <int> array;
    if (a<=0)    return 0;
    while (a!=0)
    { 
        array.push_back(a%10);
        a/=10;
    }
    long long sum(0);
    for (int i = 0; i <size(array); i++)
    {
        sum+=pow(array[i],size(array));
    }
    if (sum==b) return 1;
    return 0;
}
int main()
{
    int a;
    cin >> a;
    cout << boolalpha << isArmstrong(a);
    return 0;
}