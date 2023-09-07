//sum all the Prime number b4 or = n enter from the keyboard by Kine1606
#include <iostream>
#include <vector>
using namespace std;
int Prime( int &findNumberIndex)
{
  bool isPrime=true;
  for (size_t i = 2; i < findNumberIndex; i++)
      {
       if (findNumberIndex%i==0)
        {
          isPrime=false;
        }
      }
    if (isPrime)
    {
      return findNumberIndex;
    }
    else 
    return 0;
      return 0;
}
int main()
{
    cout << " enter the positive n= ";
    int n;
    cin >> n;
    if (n==1 || n==2)
    {
      cout << " no solution"; 
    }
    int sum(0);
    for (int findNumberIndex = 2; findNumberIndex<=n; findNumberIndex++)
    {
       sum+=Prime(findNumberIndex);
    }
    cout << sum;
}