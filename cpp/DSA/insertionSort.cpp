#include <iostream>
const int MAX = 1+1e5;
// 2 5 1 3 4 
void insertionSort(int array[MAX], int length)
{
    for (size_t i = 0; i < length-1; i++)
    {
        if(array[i] > array[i+1])
        {
            int temp = array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
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
    insertionSort(array, length);
    std::cout<< "After sort: " ;
    for (size_t i = 0; i < length; i++)
    {
        std::cout<< array[i] << " ";
    }

}