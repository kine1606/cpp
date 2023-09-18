#include <iostream>
using namespace std;        
bool isItTriangle (double a, double b, double c)
{
    if (a<b+c && b< c+a && c<a+b)
    {
        return true;
    }
    return false;
}
bool squareTriangle ( double a, double b, double c)
{
    if (a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
    {
        return true;
    }
    return false;
}
bool perfectTriangle (double a, double b, double c)
{
    if (a==b && b==c)
    {
        return true;
    }
    return false;
}
int main()
{
    double a,b,c;
    cout << "enter a=";
    cin >> a;
    cout << "enter b=";
    cin >> b;
    cout << "enter c=";
    cin >> c;

    if (isItTriangle(a,b,c))
    {
        if (squareTriangle(a,b,c))
        {
            cout << "this is a square triangle!";
            return 0;
        }
        if (perfectTriangle(a,b,c))
        {
            cout << "this is a perfect triangle";
            return 0;
        }
        cout << "this is a triangle ";
    }
    else 
    {
        cout << "this is not a triangle!";
    }
    return 0;
}