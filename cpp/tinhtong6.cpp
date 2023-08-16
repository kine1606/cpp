#include <iostream>
using namespace std;
  int main()
  {
     double s(0);
     double i(1);
     int n;
     cout<< "nhap so n= ";
     cin>>n;
       while (i<=n)
        {
           s=s+ 1/(i*(i+1));     
           i++;
        } 
    cout<< "s="<< s;
  }