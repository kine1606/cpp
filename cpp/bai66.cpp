 // 67 by Kine1606
 #include <iostream>
 #include <cmath>
 using namespace std;
 int dequygiaithua(int n)
 {
    if (n==1) return 1;
    return dequygiaithua(n-1)*n;
 }
 double dequyhaha( int x, int n)
 {
    if (n==0) return -1;
    return dequyhaha(x,n-2) + 1.0*(pow(x,n))*(pow(-1,n))/dequygiaithua(n);
 }
 int main ()
 {
    double x;
    int n;
    cout<< "enter x=";
    cin>>x;
    cout<< "enter even n=";
    do
    {
        cin>>n;
    } while (n%2!=0);
    cout << "S(x,n)=" << dequyhaha(x,n);
    return 0;
 }