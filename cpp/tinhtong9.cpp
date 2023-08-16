 #include <iostream>
using namespace std;
  int main()
  {
    // nhap chuong trinh tinh theo bai 9 cua trang studocu.com by Kine1606
     double s(0);
     double i(1);
     int n;  
      cout<< "nhap n chan= ";
          do
        {
           cin>> n;
        }      while (n%2 !=0);
   
          while (i<=n)
        {
           s=s+ (i-1)/i;
           i+=1;    // or i++
        }
    cout<< "s="<< s;
  }