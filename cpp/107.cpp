//Tìm “giá trị nhỏ nhất” trong mảng một chiều số thực (nhonhat).
// by Kine1606
#include <iostream>
#include <ctime>
#define MAX 1000
using namespace std;
int main()
{
    int h(0);
    cout << "enter h=";
    cin >> h;
    srand(time(NULL));  // khởi tạo giá trị tự động 
    int array[MAX];
    int max(0);
    for (int i = 0; i <h; i++)
    {
        array[i]=rand()%10+1;
        if (max<array[i])
        {
            max=array[i];
        }
    }
    cout << max ;
    return 0;
}