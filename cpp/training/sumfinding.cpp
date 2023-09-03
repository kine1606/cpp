#include <iostream>
#include <vector>
#include <ctime>
#include <array>
using namespace std;
int main ()
{  
  int n;
  cin >> n;
  srand(time(NULL));
  int *arr =new int[n];
  for (size_t i = 0; i < n; i++)
  {
    arr[i]= rand()%10+1;
    cout << arr[i] << " ";
  }
  cout << '\n';
  int numBerFinding;
  cin  >> numBerFinding;

  bool isFound = false;
  for (size_t j = 0; j < n; j++)
  {
    for (size_t i = j+1; i < n; i++)
    {
      if (arr[i]+arr[j]==numBerFinding)
      {
        isFound=true;
        break;
      }
      if (isFound)
      {
        break;
      }
    }
  }

  if(isFound)
  {
        cout << "YES";
  }
  else
  {
        cout << "NO";
  }
}