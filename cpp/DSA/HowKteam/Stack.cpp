// Cho một dãy số gồm n số nguyên dương ai (n≤106,  ai≤109). Với mỗi vị trí i, 
// hãy in ra gt arr[j] gần nhất về phía bên trái thoả mãn a[j] > a[i]. Nếu như không có phần tử nào thoả mãn in ra -1.
#include <iostream>
#include <stack>
const int MAXN = 1e5;
//7
// 2 1  3 2  8 5 7
//-1 1 -1 3 -1 5 5
void task(long long arr[MAXN], const int& n, std::stack<long long> & ahihi)
{
    int max = 0;
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            ahihi.push(arr[i]);
            max = arr[i];
        }
        if(!ahihi.empty())
        {
            if(arr[i] < ahihi.top())
            {
                std::cout<< ahihi.top() << " ";
            }
            else std::cout<< -1 << " ";
        }
    }
}
int main()
{
    int n;
    long long arr[MAXN];
    std::cin>> n ;
    std::stack <long long> ahihi;
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> arr[i];
    }
    task(arr, n, ahihi);
}