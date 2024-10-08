// given a rectangle nxm, upper left most is (1,1), lower right most is (n,m)
// in each box has a unsight integer
// player has to find most point by only moving right or down 
#include <iostream>
#include <vector>
#include <map>
std::map<std::pair<int,int>, long long> dp;
std::vector<std::vector<int>> arr;
long long Calc(int n, int m)
{   
    
}
int main()
{
    int n, m;
    std::cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    dp[1] = 0;
    std::cout << Calc(n, m);
}