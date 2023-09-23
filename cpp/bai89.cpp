// in ra bảng cửu chương ra màn hình 
//by Kine1606
#include <iostream>
using namespace std;
int main()
{
    for (int i = 2; i <10; i++)
    {
        cout << "              " << i << '\n';
        for (int j = 1; j <10; j++)
        {
            cout << i << "x" << j << "=" << j*i << "\n";
        }
    }
    return 0;
}