#include <iostream>
#define MAXN 100000
void SelectionSort(int [], const int&);
void output(int [], const int&);
void input(int [], int&);
int main()
{
    int n, arr[MAXN];
    input (arr, n);

    // std::cout<< "Before sort:";
    SelectionSort(arr, n);
    // std::cout<< "After sort: " ;
}

void input(int arr[MAXN], int& n)
{
    // std::cout<< "Enter n: ";
    std::cin>> n;
    // std::cout<< "Enter elements: ";
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> arr[i] ;
    }
}

void output(int arr[MAXN], const int& n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< arr[i] << " ";
    }
    std::cout <<'\n';
}

void SelectionSort(int arr[MAXN], const int& n)
{
    for (size_t i = 0; i < n; i++)
    {
        int min_index = i;
        for (size_t j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index!=i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
            output(arr, n);
        }
    }
}