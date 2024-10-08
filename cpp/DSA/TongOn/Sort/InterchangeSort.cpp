#include <iostream>
#include <ctime>
void InterchangeSort(int arr[10])
{
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = i+1; j < 10; j++)
        {
            if(arr[i] > arr[j]) std::swap(arr[i], arr[j]);
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
    InterchangeSort(arr);

    std::cout <<'\n' << "After sort:\n";
    for (size_t i = 0; i < 10; i++)
    {
        std::cout<< arr[i]  << " ";
    }
}