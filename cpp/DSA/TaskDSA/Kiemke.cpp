#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
class kiemker
{
public:
    std::string m_ms;
    int m_count;
    bool operator<(const kiemker& x)
    {
        if(m_count > x.m_count) return true;
        else if(m_count == x.m_count)
        {
            if(m_ms.size() == x.m_ms.size())
                return m_ms < x.m_ms;
            else return m_ms.size() <x.m_ms.size();
        }
        else return false;
        return true;
    }
};
void quickArr_string(std::vector<std::string>& arr, int left, int right)
{
    if(left>=right) return;
    int i= left;
    int j= right;
    std::string pivot = arr[(left+right)/2];
    while(i<=j)
    {
        while (arr[i] < pivot) i++;
        while (pivot < arr[j]) j--;
        if(i<=j)
        {
            std::swap(arr[j], arr[i]);
            i++;
            j--;
        }        
    }
    quickArr_string(arr,left, j);
    quickArr_string(arr,i, right);
}
void quickArr_kiemke(std::vector<kiemker>& arr, int left, int right)
{
    if(left >= right) return;
    int i = left;
    int j = right;
    kiemker pivot = arr[(left+right)/2];
    while(i<=j)
    {
        while (arr[i] < pivot) i++;
        while (pivot < arr[j]) j--;
        if(i <= j)
        {
            std::swap(arr[j], arr[i]);
            i++;
            j--;
        }        
    }
    quickArr_kiemke(arr,left, j);
    quickArr_kiemke(arr,i, right);
}

int main()
{
    std::vector<std::string> arr;
    int n;
    std::cin>> n ;
    std::cin.ignore();
    for (size_t i = 0; i <n; i++)
    {
        std::string x;
        getline(std::cin, x);
        arr.push_back(x);
    }
    quickArr_string(arr, 0, arr.size()-1);
    std::vector <kiemker> countIndex;
    for (size_t i = 0; i < n; i++)
    {
        int count(1);
        while(true)
        {
            if(arr[i] == arr[i+1] && (i<n)) 
            {
                count++;
                i++;
            }
            else
            {
                kiemker x;
                x.m_ms = arr[i];
                x.m_count= count;
                countIndex.push_back(x);
                break;
            }

        }
        
    }
    quickArr_kiemke(countIndex, 0, countIndex.size()-1);
    for (auto &&i : countIndex)
    {
        std::cout<< i.m_ms << " " << i.m_count <<'\n';
    }
}