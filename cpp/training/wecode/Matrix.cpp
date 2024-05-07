#include <iostream>
#include <vector>
#define MAX 1000
void nhapMaTran(int a[100][100], unsigned n)
{
    int sum(0);
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j= 0; j <n; j++)
        {
            std::cout<< "a[" << i << "][" << j << "]=" ;
            std::cin >> a[i][j] ;
            sum+=a[i][j];
        }
    }
    std::cout<< "Sum all elements ="<< sum <<'\n';
}

void tongTamGiac(int a[100][100], unsigned n)
{
    int nuaDuoi(0);
    int nuaTren(0);
    for (size_t i=0; i < n; i++)
    {
        for (size_t j=0 ; j<n ; j++)
        {
            if(i<=j)
            {
                nuaDuoi+=a[i][j];
            }
            if(i>=j)
            {
                nuaTren+=a[i][j];
            }
        }
    }
    std::cout<< "Half Upper sum is: " << nuaTren <<'\n';
    std::cout<< "Half under sum is: " << nuaDuoi <<'\n';
}
void TimPhanTu (int a[100][100], unsigned n)
{
    int min= a[0][0];
    int max=a[0][0];
    for (size_t i =0; i < n; i++)
    {
        for (size_t j =0; j < n; j++)
        {
            if(min>a[i][j]) min=a[i][j];
            else max=a[i][j];
        }
    }
    std::cout<< "Largest element is " << max <<'\n';
    std::cout<< "Lowest element is " << min <<'\n';
}
int main()
{
    unsigned int n;
    std::cout << "Enter n:" <<'\n';
    std::cin>> n ;
    int array[100][100];
    nhapMaTran(array,n);
    tongTamGiac(array,n);
    TimPhanTu(array,n);
    mostAppearance(array,n);
    // phan tu nao xuxat hien nhieu nhat 
    
}