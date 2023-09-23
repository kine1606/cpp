#include <iostream>
using namespace std;
void enterDay (int& day, int& month, int& year)
{   
    //mistake in bai82 is not check the day that fit in month
    //example that enter 31 2 2023 , that still run :); 
    do
    {
        cout << "enter day=";
        cin >> day;
    } while (day<1 || day>31);

    do
    {
        cout << "enter month=";
        cin >> month;
    } while (month <1 || month > 13);

        cout << "enter year=";
        cin >> year;
        return;    
}
int main()
{
    int day,month,year;
    enterDay(day,month,year);
    // trường hợp ngày từ 1-30 trong tháng 1 3 5 7 8 10 12 thì day ++;
    // trường hợp ngày 31 trong tháng 1 3 5 7 8 10 12 thì day=1 month ++; if month=12 thì year++ day=1 month=1;
    // trường hợp ngày 1-29 trong tháng 4 6 9 11 thì day ++;
    // trường hợp ngày 29 trong tháng 4 6 9 11 thì day=1 month ++;
    // trường hợp tháng 2 lát nói =))))))))
    switch (day,month)
    {
    case (1):
    case (3):
    case (5):
    case (7):
    case (8):
    case (10):
    case (12):
    if (day<=30)
    {
        cout << "the next day is " << year << "," << month << "," << ++day;
        break;
    }
    else
    {
        cout << "the next day is " << year << "," << ++month << "," << "1";
        break;
    }
    case (4):
    case (6):
    case (9):
    case (11):
    if (day<=29)
    {
        cout << "the next day is " << year << " " << month << " " << ++day;
        break;
    }
    else
    {
        cout << "the next day is " << year << " " << ++month << " " << "1";
        break;
    }
    default:
    if (year%4==0 && year%100!=0)
    {
        if (day<=29)
        {
            cout << "the next day is " << year << " " << month << " " << ++day;
            break; 
        }
        else 
        {
            cout << "the next day is " << year << " " << ++month << " " << "1" ;
            break;
        }
    }
    else
        if (day<=27)
        {
            cout << "the next day is " << year << " " << month << " " << ++day;
            break;
        }
        else 
        {
            cout << "the next day is " << year << " " << ++month << " " << "1";
            break;
        }
    }
    return 0;
}