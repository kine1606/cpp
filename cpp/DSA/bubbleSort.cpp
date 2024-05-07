// compare 2 elements and swap, all combinations (O(N^2)) 
#include <iostream>
const int MAX = 1 + 1e5;
void bubbleSort(int array[MAX], int length)
{
    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = i+1; j <= length-1; j++)
        {
            if(array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
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
    bubbleSort(array, length); // giam dan
    std::cout<< "After sort: " ;
    for (size_t i = 0; i < length; i++)
    {
        std::cout<< array[i] << " ";
    }

}