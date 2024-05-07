//pos and the min value of this pos;
#include <iostream>
const int MAX = 1+ 1e5;
void seletionSort(int array[MAX], int length)
{
    for (size_t i = 0; i < length; i++)
    {
        int minIndex(i);
        for (size_t j = i+1; j <= length-1 ; j++)
        {
            if(array[minIndex] > array[j])
            {
                minIndex = j;
            }
        }
        if(minIndex != i)
        {
            int temp= array[i];
            array[i]= array[minIndex];
            array[minIndex]=temp;
        }
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
    std::cout << '\n';

    seletionSort(array, length); // tan
    std::cout<< "After sort: " ;
    for (size_t i = 0; i < length; i++)
    {
        std::cout<< array[i] << " ";
    }

}