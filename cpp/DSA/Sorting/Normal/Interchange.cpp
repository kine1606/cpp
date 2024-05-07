#include <iostream>
#include <ctime>
#define MAXN 100000
void InterchangeSort(int [], const int&);
void output(int [], const int&);
void input(int [], int&);
int main()
{
    int n, arr[MAXN];
    input(arr, n);

    std::cout<< "Before sort:";
    output(arr, n);
    std::cout<<'\n';

    InterchangeSort(arr, n);

    std::cout<< "After sort: " ;
    output(arr, n);
    return 0;
}

void input(int arr[MAXN], int& n)
{
    std::cout<< "Enter n: ";
    std::cin>> n;
    srand(time(NULL));
    std::cout<< "Enter elements: ";
    for (size_t i = 0; i < n; i++)
    {
        arr[i]= rand() %10;
    }
}

void output(int arr[MAXN], const int& n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< arr[i] << " ";
    }
}

void InterchangeSort(int arr[MAXN], const int& n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            if(arr[j] < arr[i])
            {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}