#include <iostream>
using namespace std;
int main()
{
    long double a,b,c;
    long double arr[3];
    long double MAX(0);
    for (int i = 0; i <3; i++)
    {
        cin>> arr[i];
        cin.ignore();
        if (arr[i]>MAX)
        {
            MAX=arr[i];
        }
    }
    cout << "largest number is " << MAX;
}