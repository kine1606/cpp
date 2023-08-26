//S theo công thức = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N . by Kine1606

//Xem nội dung đầy đủ tại: https://123docz.net/document/3504891-de-thi-nhap-mon-lap-trinh-c-co-giai-chi-tiet.htm
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   double S(0);
   int n;
   cout << " nhap so n=";
   do
   {
   cin>> n;
   } while (n<1 || n> 1000);
   
   for (int i = 1; i <=n; i++)
   {
    S= S + 1.0/i;
   }
      cout << " tong s=" << S;
}