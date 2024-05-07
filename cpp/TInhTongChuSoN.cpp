#include <iostream>
void input( int &n)
{
    std::cin >> n;
}
void sum (int n, int &S)
{
    //if(n==0) return;
    S+=n%10;
    return sum(n/10,S); 
}
int main()
{
    int n, S=0;
    input(n);
    sum(n,S);
    std::cout << S;
}