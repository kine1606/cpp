#include <iostream>
#include <cmath>
using namespace std;
// bai1 by Kine1606
void kiemtra1 (int &a, int &b, int &c)
{
    if (a+b>c)
    {
        if (a+c>b)
        {
           if (b+c>a)
           {
             cout<< " day la 1 tam giac !" << '\n';
           }
           else
           {
            cout<< " khong phai la 1 tam giac!"<< '\n';
           }
        }
        
    }
    
}

void kiemtra2 (int &a, int &b, int &c)  // kiemtra co phai tam giac vuong hay khong
{
    if (pow(a,2)+ pow(b,2)== pow(c,2) || pow(b,2)+ pow(c,2)== pow(a,2) || pow(a,2)+ pow(c,2)== pow(b,2))
      cout<< "day la 1 tam giac vuong "<< '\n';
    else
      cout << " day khong phai la 1 tam giac vuong"<< '\n';
}

void kiemtra3 ( int &a, int &b, int &c)    //kiem tra co phai tam giac deu hay khong
{
    if (a==b & b==c)
      cout<< " day la 1 tam giac deu" << '\n';
    else 
      cout<< "day khogn phai la 1 tam giac deu "<< '\n';
}

void tinhdientich ( int &a, int &b, int &c)
{
   double S;
   S= ((a+b+c)*(b+c-a)*(a-b+c)*(a+b-c)) / 8.0;
   cout<< " dien tich S="<< S;
}

int main()
{
   int canha;
   int canhb;
   int canhc;
   cout<< " nhap canh a=";
   cin>> canha;
   cout<< " nhap canh b=";
   cin>> canhb;
   cout<< " nhap canh c=";
   cin>> canhc;
   kiemtra1(canha,canhb,canhc);
   kiemtra2(canha,canhb,canhc);
   kiemtra3(canha,canhb,canhc);
   tinhdientich( canha,canhb, canhc);
}