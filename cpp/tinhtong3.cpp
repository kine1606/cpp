#include <iostream>
using namespace std;
  int main()
  {
    float s(0);
    int i(1);
    int n;
    cin>>n;
     while (i<=n)
      {
        s= s + 1.0/i;
        i++;
      }
      cout<< "s="<<s;
  }