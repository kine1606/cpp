#include <iostream>
#include <vector>
const int MAXN = 1 + 1e5;
void input(int array[MAXN], int &n)
{
    std::cin >> n;
    int neg_count(0);
    for(size_t i = 0; i < n ; i++)
    {
        std::cin >> array[i];
    }
}
int calculate(int array[MAXN], const int n, std::vector <int> &indexibility)
{   
    int zero_count(0);
    int neg_count(0);
    int multiple(1);
    for (size_t i = 0; i < n; i++)
    {
        if(array[i] < 0) neg_count++;
        if(array[i] == 0) zero_count++;
    }
    if(zero_count == n) return 0;
    if(neg_count == 1) 
    {
        if(zero_count != n-1)
        {
            for (size_t i = 0; i < n; i++)
            {
                if(array[i] > 0)
                {
                    multiple = multiple * array[i];
                    indexibility.push_back(i);
                }
            }
            return multiple;
        }
        else 
        {
            for (size_t i = 0; i < n; i++)
            {
                if(array[i]==0)
                   indexibility.push_back(i);
            }
            return 0;
        }
    }
    if(neg_count > 1)
    {
        if(neg_count % 2 ==0)
        {
            for (size_t i = 0; i <n; i++)
            {
                if(array[i] != 0)
                {
                    multiple *= array[i];
                    indexibility.push_back(i);
                }
            }
            return multiple;
        }
        if(neg_count % 2 !=0)
        {
            int neg_max(-(1 + 1e5));
            int neg_max_index;
            for (size_t i = 0; i < n; i++)
            {
                if(array[i] < 0)
                {
                    if(array[i] > neg_max)
                    {
                        neg_max = array[i];
                        neg_max_index = i;
                    }
                }
            }
            for (size_t i = 0; i < n; i++)
            {
                if(i != neg_max_index )
                {
                   if(array[i]!= 0)
                   {
                        multiple *= array[i];
                        indexibility.push_back(i);
                   }
                }
            }
            return multiple;
        }
    }
    if(neg_count == 0)
    {
        for (size_t i = 0; i < n; i++)
        {
            if(array[i]!=0)
            {
                multiple = multiple * array[i];
                indexibility.push_back(i);
            }
        }
        return multiple;
    }
    return multiple;
}
int main()
{
    int n, array[MAXN];
    std::vector <int> indexibility;
    input(array, n);
    std::cout<< calculate(array, n, indexibility);
    std::cout <<'\n'; 
    for (size_t i = 0; i < indexibility.size(); i++)
    {
        std::cout<< array[indexibility[i]] << " ";
    }
    
}