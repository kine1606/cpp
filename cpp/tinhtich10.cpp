#include <iostream>
using namespace std;
  int main()
  { // nhap chuong trinh tinh theo bai 10 cua trang studocu.com by Kine1606
     long T(1);
     int index(1);
     int n;
     cout<< "nhap so n=";
     cin>> n;
      while (index<=n)
        {
           T=T*index;
           index++;
        }
    cout<< "T="<< T;
  }