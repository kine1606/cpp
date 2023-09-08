// tim so co phai so hoan hao hay khong ?
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n(0);
    cout << " nhap so n=";
    cin >>n;
    vector <int> arrNumber;
    for (size_t i = 1; i <n; i++)
    {
        if (n%i==0)
        {
            arrNumber.push_back(i);
        }
        else arrNumber.push_back(0);
    }
    int sum(0);
    for (int i = 0; i < n; i++)
    {
        sum+=arrNumber[i];
    }
    if ((sum== n))
    {
        cout << n << " la so hoan hao vcl";
    }
    else cout << n << " khong la so hoan hao ";
    return 0;
}