// tim so co phai so hoan hao hay khong ?
// by Kine1606
#include <iostream>
#define MAX 100000
using namespace std;
bool sumDivisor (int n)
{
    int array[MAX];
    for (size_t i = 1; i <n; i++)
    {
        if (n%i==0) array[i]=i;
        else        array[i]=0;

    }
    int sum(0);
    for (int i = 0; i < n; i++)
    {
        sum+=array[i];
    }

    if (sum==n) return true;
    else        return false;

    return true;
}
int main()
{
    int n(0);
    cout << "nhap so n=";
    cin >>n;
    if (sumDivisor(n))
    {
        cout << n << " la so hoan hao vcl";
    }
    else 
    {
        cout << n << " khong la so hoan hao ";
    }
    return 0;
}

