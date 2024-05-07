
#include <iostream>
#define MAX 1000
void NhapMang(int *a, int &n)
{
    std::cin >> n;
    for (size_t i = 0; i <n; i++)
    {
        std::cin >> *(a+i);
    }
}
int FifthMax(int a[MAX], int n)
{
    int max1=-1, max2=-1, max3=-1, max4=-1, max5=-1;
    for (size_t i = 0; i <n; i++)
    {
        if(max1 < a[i])  
        {
            max1=a[i];
        }
    }
    std::cout << "Max1=" << max1 << '\n';
    for (size_t i = 0; i < n; i++)
    {
        if(max2 < a[i])
        {
            max2 = a[i];
            if(max2>=max1)
            {
                max2=a[i-1];
                break;
            }
        }
    }
        std::cout << "Max2=" << max2<< '\n';
    for (size_t i = 0; i < n; i++)
    {
        if(max3 < a[i])
        {
            max3 = a[i];
            if(max3>=max2)
            {
                max3=a[i-1];
                break;
            }
        }
    }
    if(max3>32750)
        return -1;
        std::cout << "Max3=" << max3 << '\n';
    for (size_t i = 0; i < n; i++)
    {
        if(max4 < a[i])
        {
            max4 = a[i];
            if(max4>=max3)
            {
                max4=a[i-1];
                break;
            }
        }
    }
    if(max4>32520)
        return -1;
        
    std::cout << "Max4=" << max4 << '\n';
    for (size_t i = 0; i < n; i++)
    {
        if(max5 < a[i])
        {
            max5 = a[i];
            if(max5>=max4)
            {
                max5=a[i-1];
                break;
            }
        }
    }
    if(max5>32750)
        return -1;
        std::cout << "Max5=" << max5 << '\n';
    return max5;
}
int main()
{
    int a[]={5,6,7,98,21435,3123};
    int n;
    NhapMang(a,n);
    int fifthMax=FifthMax(a,n);
    if (fifthMax>=0)
        std::cout << fifthMax;
    else
        std::cout << "NO";
    return 0;
}
