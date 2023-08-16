#include <iostream>
using namespace std;
  int main()
  {
     double s(0);
     double i(1);
     int n;
      cout<< "nhap n = ";
      cin>> n;

          while (i<=n)
        {
           s=s+ i/(i+1);
           i++;
        }
    cout<< "s="<< s;
  }