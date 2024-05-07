#include <iostream>
#define MAXN 200
void BubbleSort(int [], const int&);
void output(int [], const int&);
void input(int [], int&);
int main()
{
    int n, arr[MAXN];
    input (arr, n);
    BubbleSort(arr, n);
    return 0;
}
void input(int arr[MAXN], int& n)
{
    std::cin>> n;
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> arr[i] ;
    }
}
void output(int arr[MAXN], const int& n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< arr[i] << " ";
    }
    std::cout <<'\n';
}
void BubbleSort(int arr[], const int& n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) 
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
                output(arr, n);
            }
        }
        if (swapped == false)
            break;
    }
}