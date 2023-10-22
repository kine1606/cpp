#include <iostream>
#include <string>
using namespace std;
int check (int angle)
{
    return 1 + (angle>>31) - (-angle>>31);
}
int gocPhanTu(int angle)
{
    int var[]= {1,0,0};
    angle %= 360;
    int value;
    value=check(angle);
    return (var[value]+var[value]+var[value])+(angle/90)+1;
}
int main() 
{
    int angle;
    cin >> angle;
    cout << gocPhanTu(angle);
    return 0;
}
