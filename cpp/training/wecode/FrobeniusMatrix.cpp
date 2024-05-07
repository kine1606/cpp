#include <iostream>
#define MAX 100
void enterMatrix(int a[][MAX], int &n)
{
    std::cin >> n;
    for (size_t i = 0; i <n; i++)
    { 
        for (size_t j = 0; j <n; j++)
        {
            std::cin >> a[i][j];
        }
    }
}
bool checkisFrobeniusMatrix(int a[][MAX], int n)
{
    // check duong cheo chinh
    for (size_t i = 0; i < n; i++)
    {
        if(a[i][i]!=1) return false;
    }
    // check phan tu tren duong cheo chinh
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j <n; j++)
        {
            if(j>i)
            {
                if (a[i][j]!=0)  return false;
            }
        }
        
    }
    // check pt duoi duong cheo chinh
    int count(0);
    for (size_t i = 0; i < n; i++)
    {
        int checkSum(0);
        for (size_t j = 0; j < n; j++)
        {
            checkSum+=a[j][i];
        }
        if(checkSum!=1)
        {
            count++;
        }
    }
    if(count!=1)  return false;
    return true;
}
int main()
{
    int n;
    int a[MAX][MAX];
    enterMatrix(a,n);
    if(checkisFrobeniusMatrix(a,n))
        std::cout << "Yes";
    else 
        std::cout << "No";
}   