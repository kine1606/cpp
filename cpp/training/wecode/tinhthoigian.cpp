#include <iostream>
using namespace std;
int main()
{
    int gio1,phut1,giay1;
    int gio2,phut2,giay2;
    cin >> gio1 >> phut1 >> giay1;
    cin >> gio2 >> phut2 >> giay2;
    // long int tong1= gio1*3600 +phut1*60 + giay1;
    // long int tong2= gio2*3600 +phut2*60 + giay2;
    // long int tong= tong1 + tong2;
    // cout << tong/3600 << " ";
    // tong%=3600;
    // cout << tong/60 << " ";
    // tong%=60;
    // cout << tong;
    gio1+=gio2;
    phut1+=phut2;
    giay1+=giay2;
    phut1+=giay1/60;
    gio1+=phut1/60;
    giay1%=60;
    phut1%=60;
    cout << gio1 << " " << phut1 << " " << giay1;
}