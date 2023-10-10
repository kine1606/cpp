// 2 so a b so nao lon hon lay max con lai lay min 
#include <iostream> 
using namespace std;
int main ()
{
    int a,b;
    cin >> a >> b ;
    (a<b) ? cout << "max = " << b << '\n' << "min = " << a:
            cout << "max = " << a << '\n' << "min = " << b;
    return 0;
}