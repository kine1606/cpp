/*Cho mảng A có N phần tử số nguyên,
Hỏi bao nhiêu phần tử trong mảng có giá trị trong đoạn [p1, p2] (với p1, p2 nhập từ bàn phím).

Xem nội dung đầy đủ tại: https://123docz.net/document/3504891-de-thi-nhap-mon-lap-trinh-c-co-giai-chi-tiet.htm*/
#include <iostream>
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
    int p1;
    int p2;
    nhapso1(p1);
    nhapso2(p2);
    if (p2<p1)
    {
        nhapso1(p1);
        nhapso2(p2);
    }
    cout << "trong khoang [p1,p2] co " << p2-p1 +1 << "phan tu";
}