//Hãy tính tích các chữ số lẻ của số nguyên dương n.
//by Kine1606
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n(0);
    cout << "enter n =";
    cin >> n;
    int multiple(1);
    vector<int> array;
    while (n!=0)
    {
        array.push_back(n%10);
        if (array.back()%3==0 || array.back()%5==0 || array.back()%7==0 )
        if (array.back()!=6)     
        {
            multiple*=array.back();
        }
        n/=10;
    }
    cout << "multiple all odd elements of n= " << multiple;
    return 0;
}