// bubble sort :quét cạn hết tất cả phần tử 
// by Kine1606
#include <iostream>
void bubbleSort(int *array, int length)
{
    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = i+1; j <length; j++)
        {
            int temp;
            if(array[i]>array[j])
            {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            }
        }
    }
}
int main()
{
    int array[]= {0,3,7,2,8,9,1,7};
    std::cout << "Before sort: ";
    int length= sizeof(array)/sizeof(array[0]);
    for (size_t i = 0; i < length; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
    std::cout << "After sort: ";
    bubbleSort(array,length);
    for (size_t i = 0; i < length; i++)
    {
        std::cout << array[i] << " ";
    }
}