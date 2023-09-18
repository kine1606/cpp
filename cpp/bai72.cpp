#include <iostream>
using namespace std;
int main()
{
    cout << "enter month: ";
    int x;
    do
    {
    cin>> x; 
    } while (x<1 ||x>12);
    switch (x)
    {
    case 1:
    case 2:
    case 3:
    cout << "Quy 1";
        break;

    case 4:
    case 5:
    case 6:
    cout << "Quy 2";
        break;

    case 7:
    case 8:
    case 9:
    cout << "Quy 3";
        break;

    case 10:
    case 11:
    case 12:
    cout << "Quy 4";
        break;
    }
    return 0;
}