#include <iostream>
#include <cmath>
long long giaiThua(int i)
{
    if(i==1) return 1;
    return i*giaiThua(i-1);
}
void TinhTong_11(int n, double& S)
{
    for (size_t i = 1; i <=n; i++)
    {
        S+= giaiThua(i);
        S = sqrt(S);
    }
}
int main() 
{
    int n;
    double S;

    std::cin >> n;
    TinhTong_11(n, S);
    std::cout << S;

    return 0;
}
