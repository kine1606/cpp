#include <iostream>
using namespace std;
#define MAX 100
void Dong1(int a[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[0][i] << " " ;
    }
    cout << '\n';
}
void allMatrix (int a[MAX][MAX], int n)
{
        
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
            cout << '\n';
    }
    cout << '\n';
}
void vienMatran(int a[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[0][i] << " ";
    }
    for (size_t i = 1; i <n-1; i++)
    {
        for (size_t j =0; ; j=n-1)
        {
            cout << a[i][j] << " ";
            if(j==n-1) break;
        }
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << a[n-1][i] << " ";
    }   
}
int main()
{
    int n;
    cin >> n;
    int array[MAX][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
    //Dong1(array,n);
    vienMatran(array,n);
}