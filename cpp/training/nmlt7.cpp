/*Cho mảng A có N phần tử số nguyên,
Hỏi bao nhiêu phần tử trong mảng có giá trị trong đoạn [p1, p2] (với p1, p2 nhập từ bàn phím).

Xem nội dung đầy đủ tại: https://123docz.net/document/3504891-de-thi-nhap-mon-lap-trinh-c-co-giai-chi-tiet.htm*/
#include <iostream>
#include <vector>
#include <ctime>
#include <random>
using namespace std;
void nhapso1(int &p1)
{
     cout << "nhap p1 = ";
     do
    {
    cin>> p1;
    } while (p1<1 || p1>100000);
}
void nhapso2(int &p2)
{
      cout << "nhap p2 = ";
     do
    {
    cin>> p2;
    } while (p2>100000);
}
int main()
{
   
    int soPhanTu;
    srand(time(NULL));
    cout << " nhap so phan tu= ";
    do
    {
        cin>> soPhanTu;
    } while (soPhanTu<1 || soPhanTu>100000);
    vector <int> arr;
    for (int i = 0; i < soPhanTu; i++)
    {
       arr.push_back(rand()%10+1);
    }
    for (int i = 0; i < soPhanTu; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< "\n";
    int p1;
    int p2;
    nhapso1(p1);
    nhapso2(p2);
    if (p2<p1)
    {
        nhapso1(p1);
        nhapso2(p2);
    }
    unsigned int count =0;
    for (int i=0; i< soPhanTu; i++)
    {
          if (p1<=arr[i] && arr[i]<=p2)
          {
             count++;
          }
          else 
          continue;
    }
    cout<< count;  
    return 0;
}