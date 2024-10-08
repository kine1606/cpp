#include <iostream>
#include <ctime>
void BubbleSort(int arr[10])
{
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < 9-i-1; j++)
        {
            if(arr[j] > arr[j+1]) 
                std::swap(arr[j+1], arr[j]);
        }
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
    BubbleSort(arr);

    std::cout <<'\n' << "After sort:\n";
    for (size_t i = 0; i < 10; i++)
    {
        std::cout<< arr[i]  << " ";
    }
}
