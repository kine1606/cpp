#include <iostream>
#include <ctime>
void SelectionSort(int arr[10])
{
    for (size_t i = 0; i < 9; i++)
    {
        int min_index = i;
        for (size_t j = i+1; j < 10; j++)
        {
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        std::swap(arr[i], arr[min_index]);
    }
}
void selectionSort(int arr[1000], int n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        int max_index = i;
        for (size_t j = i+1; j < n; j++)
        {
            if(arr[j] > arr[max_index])
                max_index = j;
        }
        std::swap(arr[i], arr[max_index]);
    }
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
    SelectionSort(arr);

    std::cout <<'\n' << "After sort:\n";
    for (size_t i = 0; i < 10; i++)
    {
        std::cout<< arr[i]  << " ";
    }
}