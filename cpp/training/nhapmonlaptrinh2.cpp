#include <iostream>
#include <cmath>
using namespace std;
// bai2 by Kine1606
#define MAX 1000
int main()
{
    int songuyen;
    int arr[MAX];
    int tong(0);
    arr[0]=0;
    cout<< " nhap so nguyen =";
    do
    {  
         cin>> songuyen;
    } while (songuyen<0);

    for (int i = 1; i <= songuyen; i++)
    {
        if (songuyen % i == 0)
        {
            arr[i]=i;
        }
        if ( songuyen% i !=0)
         {
            arr[i]=0;
         }
    
    }
    for (int i = 0; i < songuyen; i++)
    {
        tong=tong + arr[i];
    }
    
    if (tong==songuyen)
        cout<< songuyen << " la so hoan hao ";
    else 
        cout<< songuyen <<" khong phai so hoan hao";
    
    
}