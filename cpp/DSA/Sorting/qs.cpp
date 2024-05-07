#include <iostream>
#include <ctime>
#include <algorithm>
int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j <= right - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[right]);
    return i + 1;
}
void quickSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = partition(arr, left, right);
        quickSort(arr, left, mid-1);
        quickSort(arr, mid+1, right);
    }
}
int main()
{
    int n, *arr;
    std::cin>> n ;
    arr = new int [n];
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = rand()/ 100;
    }
    std::cout<< "Before sort: ";
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< arr[i]  << " ";
    }
    quickSort(arr, 0, n-1);    
    std::cout<< "after sort: ";
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< arr[i]  << " ";
    }
}