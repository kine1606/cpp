#include <iostream>
#include <cmath>
using namespace std;
struct PhanSo
{
    int t,m;
};
void Nhap(PhanSo &x)
{
    cin >> x.t >> x.m;
}
PhanSo  Nhap(){
    PhanSo b;
    cin >> b.t >> b.m;
    return b;
}
int gcd(int a, int b)
{
    if (b == 0) return abs(a);
    return gcd(b, a % b);
}
PhanSo Cong(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.t = a.t * b.m + b.t * a.m;
    c.m = a.m * b.m;
    return c;
}
void Xuat(PhanSo n)
{
    int ucln = gcd(n.t, n.m);
    // rút gọn phân số
    n.t /= ucln;
    n.m /= ucln;
    if (n.t % n.m == 0) cout << n.t / n.m;
    else cout << n.t * n.m / abs(n.m) << "/" << abs(n.m);
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}