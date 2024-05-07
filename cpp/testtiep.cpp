#include <iostream>
bool SNT(long long int k)
{
    if (k == 2 || k == 3) return true;
    else if (k <= 1 || k % 2 == 0 || k % 3 == 0) return false; 
    else
    {
        int i = 5;
        while (i * i <= k)
        {
            if (k % i == 0) return false;
            if ((i + 2) * (i + 2) <= k && k % (i + 2) == 0) return false;
            i += 6;
        }
        return true;
    }
}
int main()
{
    long long int k;
    std::cin >> k;
    if (SNT(k))
    {
        std::cout<< "true";
    }
    else std::cout << "false";
}


int n=3;
int ToiLaHoangPhuc(int n)
{
    if(n==1) return 1;
    return 1+2*ToiLaHoangPhuc(n-1);
}