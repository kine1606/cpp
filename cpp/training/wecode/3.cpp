#include <iostream>
#include <algorithm>
using namespace std;
#define MAXN 1000
void 
void Input(int &n)
{
    cin>>n;
    return ;
}
void NhapMang(int a[], int n)
{
    for (int i = 0; i <n; i++)
    {
        cin >> a[i];
    }
    return ;
}

void XuatMang (int a[], int n)
{
    for (int i = n-1; i >=0; i--)
    {
        cout << a[i] << " ";
}
    return;
}
int main() 
{
    int a[MAXN], n;
    Input(n);
    NhapMang(a, n);
    SapXepGiamDan(a, n);
    XuatMang(a, n);
    return 0;
}

void SapXepGiamDan (int a[], int n)
{
    //  sort(a, a+n, greater<int>());
        for (int i = 0; i <n; i++)
        {
            for (int j= i+1; j < n; j++)
            {
                if (a[j]<a[i])
                {
                    int temp;
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
            
        }
    return;
}