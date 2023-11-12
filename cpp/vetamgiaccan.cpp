#include <iostream>
using namespace std;
void TamGiacCan();
int main() 
{

    TamGiacCan();
    return 0;

}
void TamGiacCan()
{
    int h;
    cin >> h;
    if (h<3 || h>10)
    {
        cout << "Khong thoa dieu kien nhap.";
    }
    for (int i = h; i >0; i--)
    {   
        for (int j = 1; j <=h; j++)
        {
            if (j<i)
            {
                cout << " ";
            }
            else cout << "* ";
        }
        cout << '\n';
    }
}