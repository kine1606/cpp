#include <iostream>
int Fibo(int);
int main()
{
    int x;
    std::cin >> x;
    if(x<1)
    {
        std::cout << "So " << x << " khong nam trong khoang [1,30]."; 
    }
    else std::cout << Fibo(x);
}
int Fibo(int x)
{
    if(x==1 || x==2) return 1;
    return Fibo(x-1) + Fibo(x-2);
}