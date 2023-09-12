//Hãy đếm các chữ số lẻ của số nguyên dương n.
//by Kine1606
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n(0);
    cout << "enter n =";
    cin >> n;
    vector<int> array;
    while (n!=0)
    {
        array.push_back(n%10);
        if (array.back()%3==0 || array.back()%5==0 || array.back()%7==0)
        {
         cout << array.back();
        }
        n/=10;
    } 
    // chú bé đần nghĩ là sẽ cout ra 1 đống số 3 nhưng không haha :D
    return 0; 
}