#include <iostream>
using namespace std;
#define MAX 1000
void enterNumber(int& m, int& n)
{
    cout << "enter m=";
    cin >> m;
    cout << "enter n=";
    cin >> n;
    return ;
}
void veHCNdac(int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return;
}
void veHCNrong (int m, int n)
{   
    for (int i = 1; i <=n; i++)
     {
        cout << "*";
    }
    cout << '\n';
    for (int i = 1; i <=m-2; i++)
     {
        cout << "*";
        for (int j = 1; j <=n-2; j++)
        {
            cout << " ";
        }
        cout << "*";
        cout << '\n';
     }
   for (int i = 1; i <=n; i++)
   {
        cout << "*";
   }
   return;
}
int main()
{
    //ve hinh chuu nhat dac m dong n cot;
    int m,n;
    enterNumber(m,n);
    //veHCNdac(m,n);
    veHCNrong(m,n);
    return 0;
}