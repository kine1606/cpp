//Viết hàm tìm Max (a,b). Tìm Max(a,b,c) sử dụng lại hàm Max(a,b). Tìm Max(a,b,c,d) sử dụng lại hàm Max(a,b,c)
// by Kine1606
#include <iostream> 
using namespace std;
void enterNumber(double &a, double& b, double& c, double& d)
{
    cout << "enter a=";
    cin >> a ;
    cout << "enter b=";
    cin >> b;
    cout << "enter c=";
    cin >> c;
    cout << "enter d=";
    cin >> d;
}
double  MAXab(double a, double b)
{   
    if (a==b)   return a;
    if (a<b)    return b;
    else        return a;
    return 0;
}
double MAXabc(double a, double b, double c)
{    
    if (MAXab(a,b)==c)  return c;
    if (MAXab(a,b)<c)   return c;
    else                return MAXab(a,b);
    return 0;
}
double MAXabcd (double a, double b, double c, double d)
{   
    if (MAXabc(a,b,c)==d) return d;
    if (MAXabc(a,b,c)<d)  return d;
    else                  return MAXabc(a,b,c);
    return 0;
}
int main()
{
    double a,b,c,d;
    enterNumber(a,b,c,d);
    cout << "MAX (a,b)=" << MAXab(a,b) << '\n';
    cout << "MAX (a,b,c)=" << MAXabc(a,b,c) << '\n';
    cout << "MAX (a,b,c,d)=" << MAXabcd(a,b,c,d);
    return 0;
}