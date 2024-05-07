/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <iostream>
#include <iomanip>
#include <cmath>
double TinhTong_12(int n)
{
    double sum(0);
    for (double i = 2; i <=n; i++)
    {
        sum+=i;
        sum = pow(sum, 1.0/i);
    }
    
    return sum;
}
int main(){
    int n;    
    std::cin >> n;
    std::cout << TinhTong_12(n);
    
    return 0;
}
