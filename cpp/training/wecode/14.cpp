#include <iostream>
using namespace std;
int gocPhanTu(int angle)
{
    angle %=360;
    angle =abs(angle);
    return angle/90 +1;
}
int main() 
{
    int angle;
    cin >> angle;
    cout << gocPhanTu(angle);
    return 0;
}
