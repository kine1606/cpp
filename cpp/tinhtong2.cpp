#include <iostream>
using namespace std;
  int main()
  {
    int s(0);
    int i(1);
    int n;
    cin>>n;
    while (i<=n)
    {
        s=s+i*i;
        i++;
    }
    cout << "s="<< s;
    
  }