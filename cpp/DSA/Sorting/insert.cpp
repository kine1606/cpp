#include <iostream>
#define MAXN 1000
void insertionSort(int arr[MAXN], int n)
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;
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
    int arr[MAXN];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) 
    {
        std::cin >> arr[i];
    }
    std::cout << "Bef4 sort: ";
    for (int i = 0; i < n; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n4fter sort:";
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) 
    {
        std::cout << arr[i] << " ";
    }
}