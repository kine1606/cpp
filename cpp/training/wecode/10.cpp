/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream> 
using namespace std;

void tamGiacVuong_7();

int main() {

    tamGiacVuong_7();
    return 0;

}
void tamGiacVuong_7()
{
    int h;
    cin >> h;
    if (h<3 || h>10)
    {
        cout << "Khong thoa dieu kien nhap.";
        return;
    }
    for (int i = h; i >=1; i--)
    {
        for (int j = 1; j <h; j++)
        {
            cout << " ";
        }
        for (int j= 1; j < 2*i -1; j++)
        {
            cout << "*";
        }
        
        cout << "\n";
    }
}
