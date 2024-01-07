
#include <iostream>
using namespace std;
void intput(int &n)
{
    std::cin >> n;
}
int input()
{
    int m;
    std::cin >> m;
    return m;
}
int gcd (int m, int n)
{
    if(m==n) return m;
    if(m>n) return gcd(m-n,n);
    if(m<n) return gcd(m,n-m);
    return n;
}
int main() 
{
	int m, n;
	intput(n);
	m=input();
	std::cout << gcd(m, n);
}
