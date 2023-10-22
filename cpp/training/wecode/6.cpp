#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int tienDien;
    long int S(0);
    cin >> tienDien;
    if (tienDien<0)
    {
        cout << "Khong hop le.";
        return 0;
    }
    // 0-50
    if (tienDien<=50)
    {   
        S=tienDien*1549;
    }
    if (tienDien<=100 && tienDien>=51)
    {
        S=50*1549 + (tienDien-50)*1600;
    }
    if (tienDien>=101 && tienDien<=200)
    {
        S=50*1549 + 50*1600 + (tienDien-100)*1858;
    }
    if (tienDien>=201 && tienDien<=300)
    {
        S= 50*1549 + 50* 1600 + 100*1858 + (tienDien-200)*2340;
    }
    if (tienDien<=400 && tienDien>=301)
    {
        S= 50*1549 + 50* 1600 + 100*1858 + 100*2340 + (tienDien-300)*2615;
    }
    if(tienDien>=401)
    {
        S= 50*1549 + 50* 1600 + 100*1858 + 100*2340 + 100*2615 + (tienDien-400)*2701;
    }
    cout <<fixed <<setprecision(0) <<S+0.1*S;
}