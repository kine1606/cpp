 /*
 Tìm “số nguyên tố đầu tiên” trong mảng một chiều các số nguyên (nguyentodau). 
 Nếu mảng không có số nguyên tố thì trả về giá trị -1.
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
    int count(0);
    for (int i = 0; i <h ; i++)
    {
        for (int j = 2; j <array[i]/2; j++)
        {
            if (array[i]%j==0)
            {
                break;
            }
            else count ++;
        }
         if (count)
         {
            cout << "array[" << i << "] is first prime number";
            break;
         }
     }
     return 0;
}
        