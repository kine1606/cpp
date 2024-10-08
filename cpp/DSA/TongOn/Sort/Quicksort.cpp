#include <iostream>
#include <ctime>
void Quicksort(int arr[n], int left, int right)
{
    if(left >= right) return;
    int i = left;
    int j = right;
    int mid = (left+right)/2;
    int pivot = arr[mid];
    while(i<=j)
    {
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;
        if(i<=j)
        {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    Quicksort(arr, left, j);
    Quicksort(arr, i, right);
}   
int main()
{
    int arr[10];
    srand(time(NULL));
    for (size_t i = 0; i < 10; i++)
    {
        arr[i] = rand() ;
    }
    std::cout<< "Before sort: \n";
    for (size_t i = 0; i < 10; i++)
    {
        std::cout<< arr[i]  << " ";
    }
    std::cout <<'\n';
    Quicksort(arr, 0, 9);

    std::cout <<'\n' << "After sort:\n";
    for (size_t i = 0; i < 10; i++)
    {
        std::cout<< arr[i]  << " ";
    }
}