#include <iostream>
#include <vector>
void Merge(const std::vector <int>& arrA,const std::vector <int>& arrB, std::vector<int>& arrC)
{
    int q(0), p(0);
    int index(0);
    while(q < arrA.size() && p < arrB.size())
    {
        if(arrA[q] < arrB[p])
        {
            arrC.push_back(arrA[q++]);
        }
        else
        {
            arrC.push_back(arrB[p++]);
        }
    }
    while(q < arrA.size())
    {
        arrC.push_back(arrA[q++]);
    }
    while(p < arrB.size())
    {
        arrC.push_back(arrB[p++]);
    }
}
int main()
{
    int testCase, n, m;
    std::cin>> testCase;
    std::vector <std::vector <int>> store;
    while(testCase--)
    {
        std::cin>> n >> m ;
        std::vector <int> arrA;
        std::vector <int> arrB;
        // input arrA
        for (size_t i = 0; i < n; i++)
        {
            int x;
            std::cin>> x ;
            arrA.push_back(x);
        }

        // input arrB
        for (size_t i = 0; i < m; i++)
        {
            int x;
            std::cin>> x ;
            arrB.push_back(x);
        }

        //Merge arrA & arrB
        std::vector <int> arrC;
        Merge(arrA, arrB, arrC);
        
        // store testcase
        store.push_back(arrC);
    }
    for (size_t i = 0; i < store.size(); i++)
    {
        int countx(0);
        for (size_t j = 0; j < store[i].size(); j++)
        {
            countx++;
            std::cout<< store[i][j]  << " ";
            if(countx == 15)
            {
                std::cout <<'\n';
                countx = 0;
            }
        }
        std::cout <<'\n';
    }
    
}