// Giải phương trình ax4+bx2+c=0
// by Kine1606
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;
    cout << "enter a=";
    cin>> a;
    cout<< "enter b=";
    cin>>b;
    cout<< "enter c=";
    cin>>c;
   //quy về pt bậc 2 ẩn t
    if (a==0)
    {
        double t(0);
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
            t= -c/b;
            if (t<0)
            {
                cout << "pt vo nghiem";
            }
            else
            {
                cout << "nghiem x1=" << sqrt(t) << " "<< "nghiem x2=" << -sqrt(t);
            }
            return 0;
        }
    }
    double delta(0);   
    delta= pow(b,2) - (4*a*c);
    cout << "delta =" << delta << '\n';
    if (delta<0)     // xét delta
    {
        cout << "pt vo nghiem";
        return 0;
    }
    else
    {
        double t1(0);
        double t2(0);
        t1= (-b+sqrt(delta)) /(2*a);
        t2=(-b-sqrt(delta)) /(2*a);
        if (t1>0)
        {
            cout << "pt co nghiem x=" << sqrt(t1) << " " << " x=" << -sqrt(t1) << '\n';
        }
        if(t2>0)
        {
            cout << "pt co nghiem x=" << sqrt(t2) << " "<< "x=" << -sqrt(t2);
        }
    }
    return 0;
}