// vẽ tam giác số by Kine1606
#include <iostream>
using namespace std;
void tamGiacCanChuSo_3() 
{
    int h;
    cin >> h;
    if (h<3 || h>9)
    {
        cout << "Khong thoa dieu kien nhap.";
        return ;
    }
    for (int i = 1; i <=h; i++)
    {
        int index(h-i);
        while (index)
        {
            cout << "  ";
            index--;
        }
        for (int j = 1; j<=i; j++)
        {
            cout << j << "   ";
        }   
        cout << '\n';
    }
}
int main() {
    tamGiacCanChuSo_3();
    return 0;
}
