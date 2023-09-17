//Kiểm tra số nguyên 4 byte có dạng 3^k  hay không?
//by Kine1606
#include <iostream>
using namespace std;
int main ()
{
    cout << "enter n=";
    int n;
    cin>>n;
    while (n%3==0)
    {
        n/=3;
    }
    (n==1)?cout << "this is 3^k number" : cout << "this is not 3^k number";
    return 0;
}