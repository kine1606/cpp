#include <iostream>
#include <ctime>
#include <algorithm>
#define MAXN 100000
void Quicksort(int [], int, int);
void output(int [], const int&);
int n;
int main()
{
    std::cout<< "Enter n: ";
    int arr[MAXN];
    std::cin>> n ;
    srand(time(NULL));
    std::cout<< "Enter elements: ";
    for (size_t i = 0; i < n; i++)
    {
        arr[i]= rand()%10 + 1;
    }
    std::cout<< "Before sort:";
    output(arr, n);
    std::cout<<'\n';

    Quicksort(arr, 0, n-1);
    std::cout<< "After sort: " ;
    output(arr, n);
}
void output(int arr[MAXN], const int& n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< arr[i] << " ";
    }
}
void Quicksort(int arr[MAXN], int left , int right)
{
    if(left >= right) return;
    int mid= (left + right)/2;
    int pivot = arr[mid];
    int i = left ;
    int j = right ;
    while (i<=j)
    {
        while (arr[i] < pivot)  i++;
        while (arr[j] > pivot)  j--;
        if(i<=j)
        {
            std::swap(arr[j], arr[i]);
            i++;
            j--;
        }
    }  
    Quicksort(arr, left, j);
    Quicksort(arr, i, right);
}