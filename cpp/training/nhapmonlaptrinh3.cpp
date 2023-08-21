#include <iostream>
using namespace std;
int main()
{
 int length;
 int MAX(0);
 cout<< " nhap chieu dai mang: ";
 cin>> length;
 int *arr= new int[length];
 for (int i = 0; i < length; i++)
 {
    cout<< "arr[" << i << "]=";
    cin>> arr[i];
 }

 for (int i = 0; i < length; i++)
 {
    if (arr[i]> MAX)
    {
        MAX=arr[i];
    }  
 }
 cout << MAX;
}