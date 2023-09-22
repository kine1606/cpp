// array that have all square number or not ?
// by Kine1606 
#include <iostream>
using namespace std;
const int MAX=50;
void NhapMang(int a[], int &n)
{ 
    do
    {
        cout<<"Nhap so nguyen n=";
        cin>>n;
    }while(n<1 || n>MAX);
    for(int i=0; i<n; i++)
    { 
        cout<<"Nhap a["<<i<<"]= ";
        cin>>a[i];
    }
}
int soChinhPhuong(int a[], int& n)
{
    int count(0);
    for (int  i = 0; i <n; i++)
    {
        for (int j = 2; j <200; j++)
        {
            if (a[i]==2)
            {
                count++;
                break;
            }
            if (a[i]==j*j)
            {
                count ++;
                break;
            }   
            
        }
        
    }
    if (count==n)
    {
        cout << "array is all square numbers";
    }
    else cout << "array is not all square numbers";
    return 0;
}
int main()
{
    int array[MAX];
    int n;
    NhapMang(array, n);
    soChinhPhuong(array, n);
    return 0;
}