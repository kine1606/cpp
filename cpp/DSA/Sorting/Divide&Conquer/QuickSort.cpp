#include <iostream>
#include <ctime>
#include <algorithm>
#define MAXN 100000
void Quicksort(int [], int, int);
int Partition(int [], int, int);
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
        arr[i]= rand()%10;
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
void Quicksort(int arr[MAXN], int low, int high)
{
    if(low < high)
    {
        int mid = Partition(arr, low, high);
        Quicksort(arr, low, mid-1);
        Quicksort(arr, mid+1, high);
    }
}
int Partition(int arr[], int low, int high) 
{
    int pivot = arr[low];
    int i = low +1;
    int j = high;
    while(true)
    {

        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;
        std::swap(arr[j], arr[i]);
        i++;
        j--;
        if(i > j) 
        {
            std::swap(arr[low], arr[j]);
            break;
        }
    }
    return j;
}