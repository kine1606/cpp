#include <iostream>
#include <array>
#include <ctime>
#include <random>
#define MAX 10       
using namespace std;
  void dosth ( int& a, int b)
  {
     cin>> a;

     cin>> b;
      cout<< a << " A " << &a << '\n';
      cout<< b << " B " << &b << '\n';
  }
  int main()
  {
   int x;
   int y;
   dosth(x,y);
   cout<< x << " x " << &x << '\n';
   cout<< y << " y " << &y << '\n';
  }

