#include <iostream>
using namespace std;
int func(int n)
{

    if(n%2!=0)
    {
        return n-1;
    }
    return n;
}
int main()
{
    int n;
    do
    {
    cout << "enter n(n>2):";
    cin >> n; 
    } while (n<=2);
    cout << "there are " << func(n)*2 << " ways";
    return 0;
}