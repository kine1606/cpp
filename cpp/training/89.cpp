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
  int numBerFinding;
  cin  >> numBerFinding;
  for (size_t j = 0; j < n; j++)
  {
    for (size_t i = j+1; i < n; i++)
    {
      if (arr[i]+arr[j]==numBerFinding)
      {
        cout << "YES";
        exit(0);
        // exit all the loop to the main but unless the condition true , how to cout << "NO " on the screen? big blind there;
      }
    }
  }
  
  
}