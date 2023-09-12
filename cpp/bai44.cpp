//Cho số nguyên dương n, hãy tìm chữ số đầu tiên của n. 
// by Kine1606
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n(0);
    cout << " enter positive n=";
    cin >> n;
    vector<int> array;
    while (n!=0)
    {
        array.push_back(n%10);
        n/=10;
    }
    cout << " the first element of n is " << array.back();
    return 0;
}