#include <iostream>
#include <ctime>
#include <algorithm>
#define MAXN 100000
void InsertionSort(int *, const int&);
void output(int [], const int&);
void input(int [], int&);
int main()
{
    int n, arr[MAXN];
    input(arr, n);
    InsertionSort(arr, n);
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
void InsertionSort(int arr[],const int& n)
{
    int j;
    for (size_t i = 1; i < n; i++) 
    {
        int key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            output(arr, n);
        }
        arr[j + 1] = key;
        output(arr, n);

    }
}
