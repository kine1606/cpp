#include <iostream>
#include <iomanip>
#define MAX 20
using namespace std;
void hinhVuong_DacBiet_5()
{
    int n;
    cin >> n;
    if (n<3 || n>10)
    {
        cout << "Khong dung dieu kien nhap.";
        return ;
    }
    
    int array[MAX][MAX];
    int h1(0), h2(n-1), c1(0), c2(n-1), count(1);
    while (h1<=h2 && c1<=c2)
    {
    for (int i = c1; i <=c2; i++)
    {
        array[h1][i]=count;
        count++;
    }
    h1++;
    for (int i = h1; i <= h2; i++)
    {
        array[i][c2]=count;
        count++;
    }
    c2--;
    for (int i = c2; i >=c1; i--)
    {
        array[h2][i]=count;
        count++;
    }
    h2--;
    for (int i = h2; i >=h1; i--)
    {
        array[i][c1]=count;
        count++;
    }
    c1++;
    }
    for (int i = 0; i <n; i++)
    {
        for (int j= 0; j <n; j++)
        {
            if (array[i][j]==100)
            {
                cout << array[i][j] << "  ";
                continue;
            }
            
            if (array[i][j]>=10)
            {
                cout << array[i][j] << "   ";
            }
            else cout << array[i][j] << "    ";
        }
        cout << '\n' ;
        cout << '\n';
    }
}
int main() 
{
    hinhVuong_DacBiet_5();
    return 0;
}
