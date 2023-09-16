// giải pt bậc 2 ax^2 +bx+c=0
// by Kine1606
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;
    cout << "enter a=";
    cin >> a;
    cout << "enter b=";
    cin>> b;
    cout << "enter c=";
    cin>>c;
    if (a==0)
    {
        if (b==0)
        {
            if (c==0)
            {
                cout << "pt co vo so nghiem ";
                return 0;
            }
            else 
            {
                cout << "pt vo nghiem ";
                return 0;
            }
        }
        else 
        {
            cout << " nghiem x=" << (-c/b);
            return 0;
        }
    }
    double delta(0);   
    delta= pow(b,2.0) - (4*a*c);
    cout << "delta =" << delta << '\n';
    if (delta<0)     // xét delta
    {
        cout << "pt vo nghiem";
        return 0;
    }
    else
    {
        double nghiem1(0);
        double nghiem2(0);
        nghiem1= (-b+sqrt(delta)) /(2*a);
        nghiem2=(-b-sqrt(delta)) /(2*a);
        if (nghiem1==nghiem2)
        {
        cout << "pt co 1 nghiem kep x=" <<nghiem1;
        return 0;
        }
        else
        cout << "pt co 2 nghiem x1=" << nghiem1 << " " << " x2=" << nghiem2;
        return 0;
    }
    return 0;
}
