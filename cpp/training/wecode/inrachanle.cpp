#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long number;
    cin >> number;
    int sum1(0);
    int sum2(0);
    int index(0);
    while (number!=0)
    {   
        index=(number%10);
         if (index%2==0)    
             sum2+=index;
        
         else          
            sum1+=index;

        number/=10;
    }
    cout << sum1 << " " << sum2;
    return 0;
}