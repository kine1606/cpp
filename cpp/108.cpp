//Tìm “số chẵn đầu tiên” trong mảng một chiều số thực (chandau).
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
    for (int i = 0; i < h; i++)
    {
        array[i]= rand();
        if (array[i]%2==0)
        {
            cout << "the first even number in array is " << array[i];
            return 0;
        }
    }
    cout << "-1";
    return 0;
}