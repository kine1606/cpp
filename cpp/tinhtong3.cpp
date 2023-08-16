#include <iostream>
using namespace std;
  int main()
  {
     // nhap chuong trinh tinh theo bai 3 cua trang studocu.com by Kine1606
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