#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << " enter a= ";
    int a,b;
    cin>> a;
    double x(0);
    cout << " enter b= ";
    cin>>b;
    if (a==0)
    {
        if (b==0)
        {
            cout << " pt vo so nghiem ";
        }
        else cout << "pt vo nghiem";
    }
    else cout << setprecision(10)<< (x=-b*1.0/a);
    return 0;
}   