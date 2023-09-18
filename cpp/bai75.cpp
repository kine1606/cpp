 //In ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7 và 93. 
 // by Kine1606
#include <iostream>
using namespace std;
int main()
{
    for (int  i = 1; i < 100; i+=2)
    {
        if (i==5 || i==7 || i==93)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}