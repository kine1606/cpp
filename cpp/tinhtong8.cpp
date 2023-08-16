#include <iostream>
using namespace std;
  int main()
  {
    // nhap chuong trinh tinh theo bai 8 cua trang studocu.com by Kine1606
     double s(0);
     double index(1);
     int n;
      cout<< "nhap n = "; 
      cin>> n;
          while (index<=n)
        {
           s=s+ (index-1)/index;
           index++;
        }
    cout<< "s="<< s;
  }