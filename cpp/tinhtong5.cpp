#include <iostream>
using namespace std;
  int main()
  {
     double s(0);
     double i(1);
     int n;
      cout<< "nhap n le = ";
          do
        {
           cin>> n;
        } while (n%2 ==0);
   
          while (i<=n)
        {
           s=s+ 1/i;
           i+=2;
        }
    cout<< "s="<< s;
  }