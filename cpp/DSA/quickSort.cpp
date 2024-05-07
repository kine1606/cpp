#include <iostream>
const int MAX = 1 + 1e5;
// 1 5 7 3 8 
int partition (int array[MAX], int low , int high)
{
    int i = low;
    int j = high;
    int pivot = array[low]; 
    while (i < j)
    {
        do
        {
            i++;
        } while (array[i] <= pivot);
        do
        {
            j--;
        } while (array[j] >= pivot);
        if(i<j)
        {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }

    }
    int temp = array[low];
    array[low] = array[j];
    array[j] = temp;
    return j;
}
void quickSort(int array[MAX], int low, int high)
{

    if(low < high) 
    {
        int j = partition(array, low, high);
        quickSort(array, low, j);
        quickSort(array, j+1, high);
    }

}
int main()
{
    int length;
    std::cin>> length ;
    int array[MAX];
    for (size_t i = 0; i < length; i++)
    {
        std::cin>> array[i] ;
    }

    std::cout<< "Before sort: " ;
    for (size_t i = 0; i < length; i++)
    {
        std::cout<< array[i] << " ";
    }

    quickSort(array, 0, length-1);

    std::cout<< "After sort: " ;
    for (size_t i = 0; i < length; i++)
    {
        std::cout<< array[i] << " ";
    }

}