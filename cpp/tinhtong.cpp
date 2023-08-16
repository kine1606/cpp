#include <iostream>
using namespace std;
  int main()
  {
     // nhap chuong trinh tinh theo bai 1 cua trang studocu.com by Kine1606
    int s(0);
    int i(1);
    int n;
    cin>>n;
     while (i<=n)
      {
        s=s+i;
        i++; 
      }
    cout<< "s="<< s;
  }
  