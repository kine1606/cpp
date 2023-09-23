// Nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày
// by Kine1606
#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "enter month=";
    cin >> month;
    int year;
    cout << "enter year=";
    cin >> year;
    const int year1 = year;
    switch (month)
    {
    case (1):
    case (3):
    case (5):
    case (7):
    case (8):
    case (10):
    case (12):
        cout << "month has 31 days";
        break;
    case (4):
    case (6):
    case (9):
    case (11):
        cout << "month has 30 days";
        break;
    default:
    if (year%4==0 && year%100!=0)  
    {
        cout << "month has 29 days"; // năm nhuận
    }
    else
    {
        cout << "month has 28 days"; // năm 0 nhuận
    }
        break;
    }
    return 0;
}