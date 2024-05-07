#include <iostream>
#define MAX 1000
// void xuatMang(int array[], int length)
// {
//     std::cout << '\n';
//     std::cout << "After sort: ";
//     for (size_t i = 0; i < length; i++)
//     {
//         std::cout << array[i] << " ";
//     }
// }
// void StartSort (int a[], int l, int h)
// {
//     int pivot = a[l];
//     int i=l;
//     int j=h;
//     while (i<j)
//     {

//     }
    
// }
// void quicksort(int a[], int length) 
// {

// }
// void quickkk (int a[], int length)
// {
//     int pivot=a[0];
//     int i=1;
//     int j=length-1;
//     while (i<j)
//     {
//         do
//         {
//            i++; 
//         } while (pivot > a[i]);
//         do
//         {
//             j--;
//         } while (pivot < a[j]);
//         int temp=a[i];
//         a[i]=a[j];
//         a[j ]=temp;
//     }
//     int temp=a[0];
//     a[0]=a[i];
//     a[i]=temp;
// }


void startSort (int a[], int l ,int h)
{
    
}

void quickSort(int a[], int length)
{
    int l=0;
    int h=length;
    if (l<h)
    {
        startSort(a,l,h/2);
        startSort(a,h/2+1,h);
    }
    
}


int main()
{
int array[]= {4,8,3,1,7,5,9,2};
    std::cout << "Before sort: ";
    int length= sizeof(array)/sizeof(array[0]);
    for (size_t i = 0; i < length; i++)
    {
        std::cout << array[i] << " ";
    }
    //quicksort(array,length);
    // quickkk(array, length);
    // xuatMang(array,length);
}