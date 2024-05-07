/*
Cho hai dãy số nguyên a và b lần lượt gồm n và m phần tử được sắp xếp không giảm
Hãy ghép hai dãy trên thành một dãy mới c sao cho các phần tử trong dãy c được sắp xếp không giảm
*/
#include <iostream>
#include <vector>
const int MAXN = 1+ 1e5;
void input(int& n, int arrayA[MAXN], int& m, int arrayB[MAXN])
{
    std::cin>> n ;
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> arrayA[i];
    }
    std::cin>> m ;
    for (size_t i = 0; i < m; i++)
    {
        std::cin>> arrayB[MAXN];
    }
}
void mergeArray (const int n, int arrayA[MAXN], const int m, int arrayB[MAXN]) 
{
    int p = 0;
    int q = 0;
    std::vector <int> arrayC;
    while(p < n && q < m)
    {
        if(p==n)
        {
            arrayC.push_back(arrayB[q]);
            q++;
            continue;
        }
        if(q==n)
        {
            arrayC.push_back(arrayB[p]);
            p++;
            continue;
        }
        if(arrayA[p] < arrayB[q])
        {
            arrayC.push_back(arrayA[p]);
            p++;
        }
        else 
        {
            arrayC.push_back(arrayB[q]);
            q++;
        }
    }
    for (auto &&i : arrayC)
    {
        std::cout<< i << " ";
    }
    
}
int main()
{
    int n, m, arrayA[MAXN], arrayB[MAXN];
    input(n, arrayA, m, arrayB);
    mergeArray(n, arrayA, m, arrayB);
}
