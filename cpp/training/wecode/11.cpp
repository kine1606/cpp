#include <iostream>
// #include <cmath>
using namespace std;
void input (int &angle)
{
    cin >> angle;
}
int GocPhanTuLuongGiac(int &angle)
{
    angle %=360;
    angle =abs(angle);
    if (angle <90)
    {
        return 1;
    }
    if (angle>=90 && angle <180)
    {
        return 2;
    }
    if (angle>=180 && angle<270)
    {
        return 3;
    }
    else  return 4;
}
int output(int a)
{
    if (a==1) cout << 1;
    if (a==2) cout << 2;
    if (a==3) cout << 3;
    if (a==4) cout << 4;
    return 0;
}
int main() 
{
    int angle;

    input(angle);
    output (GocPhanTuLuongGiac(angle));

    return 0;
}
