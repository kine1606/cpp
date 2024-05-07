#include <iostream>
#include <vector>
#include <algorithm>
void output(std::vector<int>);
void Quick(std::vector <int>& arr, int left , int right)
{
    if(left >= right) return;
    int mid= (left + right)/2;
    int pivot = arr[mid];
    int i = left ;
    int j = right ;
    while (i<=j)
    {
        while (arr[i] < pivot)  i++;
        while (arr[j] > pivot)  j--;
        if(i<=j)
        {
            std::swap(arr[j], arr[i]);  
            i++;
            j--;
        }
    }  
    output(arr);
    Quick(arr, left, j);
    Quick(arr, i, right);
}
void output(std::vector<int> arr)
{
    for (auto &&i : arr)
    {
        std::cout<< i << " ";
    }
    std::cout <<'\n';
}
int main()
{
    int n;
    std::cin >> n;
    std::vector <int> arr;

    int x;
    std::cin>> x ;
    arr.push_back(x);

    for (size_t i = 1; i < n; i++)
    {
        std::cin>> x ;
        if(arr.back()!=x) 
            arr.push_back(x);
    }
    Quick(arr, 0, arr.size()-1);
    int check(0);
    for (size_t i = 0; i < arr.size(); i++)
    {
        if(check==arr[i]) 
            check++;
        else 
            break;
    }
    std::cout<< check;
    return 0;
}