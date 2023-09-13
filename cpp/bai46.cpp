//Tìm chữ số lớn nhất của số nguyên dương n. 
// by Kine1606
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << " enter positive n=";
    int n;
    cin >> n;
    vector <int> array;
    while (n!=0)
    {
        array.push_back(n%10);
        n/=10;
    }
      int MAX(0);
    for (int i = 0; i <sizeof(array)/sizeof(array[1]); i++)
    {
      if (array[i]> MAX)
      {
        MAX=array[i];
      }
      
    }
    cout << "highest element of n is " << MAX;
    return 0;
}