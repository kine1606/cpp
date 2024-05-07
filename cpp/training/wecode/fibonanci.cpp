#include <iostream>
using namespace std;
void tamGiacCan_4()
{
    int h;
    cin >> h;
    if (h<3 || h>10)
    {
        cout << "Khong thoa dieu kien nhap.";
        return;
    }
    int count(1);
    for (int  i = 1; i <h; i++)
    {
        cout << "  ";
        if (i==h-1)   cout << "*\n";        
    }

    for (int i = 1; i<h-2; i++)
    {
        count++;
        for (int j = 1; j <=h; j++)
        {
            if (j==h) cout << "*";
            else cout << "  ";
            if (j>=h+1-count)   cout << "*";
        }
        cout << '\n';
    }
}
int main() {

    tamGiacCan_4();
    return 0;
}
