#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int a,b,c;
    cin >> a >> b >> c;
    double tong= (a+b+c)/3.0;
    if (tong- ((a+b+c)/3) !=0)
    {
        cout << "DTB = " << fixed <<  setprecision(2) << tong << '\n';
    }
    else
    {  
         cout << "DTB = " << tong << '\n';
    }
    cout << "Loai: ";
    if (tong>=9 && tong <=10)
    {
        cout << "XUAT SAC";
        return 0;
    }
    if (tong <9 && tong >=8)
    {
        cout << "GIOI";
        return 0;
    }
    if (tong <8 && tong >= 7)
    {
        cout << "KHA";
        return 0;
    }
    if (tong>=6 && tong <7)
    {
        cout << "TB KHA";
        return 0;
    }
    if (tong <6 && tong >=5)
    {
        cout << "TB";
        return 0;
    }
    if (tong <5 && tong>=4)
    {
        cout << "YEU";
        return 0;
    }
    if (tong <4)
    {
        cout << "KEM";
    }
}