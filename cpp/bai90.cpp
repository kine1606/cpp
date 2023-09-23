//Cần có tổng 200000 từ 3 loại giấy bạc 1000đ, 2000đ và 5000đ; có bao nhiêu phương án có thể
//by Kine1606
//có tối đa 200 tờ 1000 , 100 tờ 2000 , 40 tờ 5000
#include <iostream>
using namespace std;
int main()
{
    long int count (0);
    for (int i = 0; i <= 200; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            for (int k = 0; k <= 40; k++)
            {
                if (i*1000 + j*2000 + k*5000==200000)
                {
                     count++;
                }
                
            }
            
        }
        
    }
    cout << "there are " << count << " possible ways";
    return 0;
}