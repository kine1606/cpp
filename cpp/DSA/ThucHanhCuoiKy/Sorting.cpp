#include <iostream>
#define MAXN 100000
using namespace std;
void output(int arr[MAXN], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout <<'\n';
}
void bubbleSort(int arr[MAXN], int n)
{
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = i+1; j <=n-i-1; j++)
        {
            if(arr[i] > arr[j]) std::swap(arr[i], arr[j]);
        }
    }
}
void quickSort(int arr[MAXN], int n, int left, int right)
{
    if(left >= right) return;
    int i = left;
    int j = right;
    int pivot = arr[(i+j)/2];
    while(i<=j)
    {
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;
        if(i<=j)
        {
            std::swap(arr[i], arr[j]);
            j--;
            i++;
        }
    }
    quickSort(arr, n, left, j);
    quickSort(arr, n, i, right);
}
void insertionSort(int arr[MAXN], int n)
{
    for (size_t i = 1; i < n; i++)
    {
        int j = i-1;
        int key = arr[i];
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int n;
    int arr[MAXN];
    std::cin>> n ;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::cout<< "b4: " ;
    output(arr, n);
    quickSort(arr, n, 0, n-1);
    std::cout<< "af: ";
    output(arr, n);
}