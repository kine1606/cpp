#include <iostream>
#include <math.h>
#define MAXN 100
using namespace std;
struct PhanSo
{
	int tu;
	int mau;
};
void Nhap(PhanSo a[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i].tu >> a[i].mau;
	}
}
double gcd(int a, int b)
{
	if(b==0) return a;
	return gcd(b, b%a);
}
void Xuat(PhanSo a[],int n)
{
	for(int i=0; i<n; i++)
	{
        double ahihi;
        if(a[i].mau ==0) 
        {
            std::cout<< "Khong thoa yeu cau bai toan" <<'\n';
            continue;
        }
        if(a[i].tu > a[i].mau)
        {
             ahihi= gcd(a[i].tu, a[i].mau);
        }
        else 
        {
           ahihi=gcd(a[i].mau, a[i].tu);
        }
		double tusoo= (1.0* a[i].tu) / ahihi;  
		double mausoo= (1.0*a[i].mau) / ahihi;
		double c= tusoo/mausoo;
		if(c- int(c) == 0)
		{
            std::cout << c;
        }
        else 
        {
            std::cout << tusoo << "/" << mausoo;
        }
        std::cout << '\n';
	}
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}


// 