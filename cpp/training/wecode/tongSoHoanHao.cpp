/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
#include <cmath>
#define MAXN 100
void Input(int *a, int &n)
{
    std::cin>> n ;
    for (size_t i = 0; i <n; i++)
    {
        std::cin>> a[i];
    }
}
int soHoanHao(int number)
{
    int sum(1);
    if(number <=5) return 0;
    for (size_t i = 2; i <= sqrt(number); i++)
    {
        if(number%i==0)
        {   
            sum +=i+number/i;
        }
    }
    if(sum==number) return sum;
    return 0;
}
int TongCacSoHoanHao(int *a, int n)
{
    int sum(0);
    for (size_t i = 0; i <n; i++)
    {
        sum+=soHoanHao(a[i]);
    }
    return sum;
}
int main() {
    int a[MAXN], n;
    Input(a, n);
    std::cout << TongCacSoHoanHao(a, n);
    return 0;
}
