// copy 
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    if(n <= 2)
    {
        cout << n << " khong phai so nguyen to\n";
        return 0;
    }
    
    int count = 0;  // bool isPrime=true;
    for(int i = 2; i <n; i++)
    {
        if(n % i == 0)
        {
            count++; //isPrime=false;
        }
    }
    if(count == 0) // if (isPrime)
    {
        cout << n << " la so nguyen to\n";    // cout << " khong la so nguyen to  ";
    }
    else
    {
        cout << n << " khong phai so nguyen to\n";  // cout << " la so nguyen to ";
    }
}