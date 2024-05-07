#include <iostream>
int modulo(int m, int n)
{
    if(m<n) return m;
    if (m==0 && n==0 ) return -1;
    if (m==n) return 0;
    if (m==0) return 0;
    if(m>n) return modulo(m-n,n);
    return m;
}
int main ()
{
    int m, n; 
    std::cin >> m >> n;
	std::cout << modulo(m, n);
}