#include <iostream>
#include <ctime>
void InsertionSort(int arr[10])
{
    for (size_t i = 1; i < 10; i++)
    {
        int j = i - 1;
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
    InsertionSort(arr);

    std::cout <<'\n' << "After sort:\n";
    for (size_t i = 0; i < 10; i++)
    {
        std::cout<< arr[i]  << " ";
    }
}