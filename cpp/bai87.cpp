 // tính S(x,n) =x^n (double n);
 // by Kine1606
 #include <iostream>
 #include <cmath>
 using namespace std;
 int main()
 {
    double x,n;
    cout << "enter x=";
    cin >> x;
    cout << "enter n=";
    cin >> n;
    cout << "S(x,n)=" << pow(x,n);
    return 0;
 }