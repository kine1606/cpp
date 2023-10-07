/*
Tìm “số hoàn thiện đầu tiên” trong mảng một chiều các số nguyên (hoanthiendau).
Nếu mảng không có số hoàn thiện thì trả về giá trị -1
by Kine1606 
*/
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
        array[i]=rand();
        cout << "array[" << i << "]= " << array[i] << '\n';
    }
    int SUM(0);
    for (int i = 0; i <h; i++)
    {
        for (int j = 1; j <h; j++)
        {
            if (array[i]%j==0)
            {
                SUM+=j;
            }
            else SUM+=0;
           if (SUM== array[i])
           {
                cout << "array [" << i << "] is the first perfect number";
                return 0;
           }
        }
    }
    cout << "-1";
    return 0;
}