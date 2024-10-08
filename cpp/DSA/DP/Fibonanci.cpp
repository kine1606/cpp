#include <iostream>
#include <map>
std::map<int, long long> mark;

long long Fibonanci(unsigned int n)
{
    //check xem so thu n da co gia tri chua 
    if(!mark[n])  mark[n] = Fibonanci(n-1) + Fibonanci(n-2);
    return mark[n];
}
int main()
{
    // Nhap vao so nguyen duong n 
    // xuat ra so fibonanci thu n
    mark[0] = 0;
    mark[1] = 1;
    mark[2] = 1;
    unsigned int n;
    std::cin >> n;
    std::cout << "So Fibonanci thu " << n << ": " << Fibonanci(n);
}