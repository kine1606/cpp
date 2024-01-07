// nhap vao 2 so nguyen n va m . list ra uoc cua n nhung khong phai cua m 
#include <iostream>
using namespace std;
int main()
{
    unsigned int n,m;
    cout << "enter n=";
    cin >> n;
    cout << "enter m=";
    cin >> m;
    for (int i = 2; i <=n; i++)
    {
        if (n%i==0 && m%i!=0)
        {
            cout << i << " ";
        }
    }
    return 0;
}