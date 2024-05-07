#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;
void Nhap(int &x)
{
    cin >> x;
}
void Xuat(int x)
{
    cout << x << '\n';
}
void Nhap2(int *x)
{
    cin >> *x;
}
void Xuat2(int *x)
{
    cout << *x;
}
int main()
{
    // int x, *p=NULL;
    // x=10;
    // p=&x;
    // Nhap(x);
    // Xuat(x);
    // Nhap2(&x);
    // Xuat2(&x);
    // int x, *p=NULL;
    // cout << "x: " << x << " " << &x << '\n';
    // cout << "p: " << p << " " << &p << '\n';
    // x=10; 
    // p=&x;
    // cout << "p: " << p << " " << &p << '\n';
    // cout << *p;
    auto start = high_resolution_clock::now();
    int x,y;    
    cin >> x >> y;
    for (int i = abs(x-y); i >=2; i--)
    {
        if (x%i==0 && y%i==0)
        {
            cout << i << '\n';
            break;
        }   
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by function: "
    << duration.count() << " microseconds" << endl;
}