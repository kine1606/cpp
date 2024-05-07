#include <iostream>
#define MAXN 32000
bool BinarySearch (const int &n, const int &k, int *array)
{
    int left = 0, right = n-1;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if(array[mid] > k) right = mid - 1;
        else if(array[mid] < k) left = mid +1;
        else return true;
    }
    return false;
}
int Largest_But_SmallerThanK(const int &n, const int &k, int *array, int& count);
int Smallest_But_HigherThanK(const int &n, const int &k, int *array, int& count);
// tim phan tu lon nhat <= k 
// tim phan tu nho nhat > k 
int main()
{
    int n, *array;
    int k;
    std::cout<< "Enter n:";
    std::cin>> n ;
    array = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> array[i] ;
    }
    std::cin>> k ;  
    bool check = BinarySearch(n, k , array);
    if(check) std::cout<< "YES" <<'\n';
    else std::cout<< "NO" <<'\n';
    Largest_But_SmallerThanK(n, k, array);
    delete array;
}
int Largest_But_SmallerThanK(const int &n, const int &k, int *array)
{
    int left = 0, right = n-1;
    int LBSTK;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if(array[mid] <= k)
        {
            LBSTK = array[mid];
            left = mid+1;
        }
        else right = mid -1;
    }
    return 0;
}
int Smallest_But_HigherThanK(const int &n, const int &k, int *array, int& count)
{
{
    int left = 0, right = n-1;
    int SBHTK;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if(array[mid] >= k)
        {
            SBHTK = array[mid];
            left = mid+1;
        }
        else right = mid -1;
    }
    return 0;
}
}
// k = 15 LBSTK 14
// k = 16 SBLTK = 20
// 1 3 5 6 8 10 14 16 20 24
// mid = 8 