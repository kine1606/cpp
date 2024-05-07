#include <iostream>
#include <cmath>
using namespace std;

    int sum_all_square(int n)
    {
        int count(1);
        for (size_t i = 4; i < n; i++)
        {
        if(n%i==0)   // lược ước chung 
                for (size_t j = 1; j <i; j++)
                {
                    if(sqrt(i)==j)  // tìm coi UC đó có phải là scp hay không
                    {
                        count+=j*j;
                        break; 
                    }
                }
        }
        return count;
    }
int main()
{
    int n;
    cin >> n;
    cout << sum_all_square(n);
    return 0;
}