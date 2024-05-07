// check that Matrix B is submatrix of Matrix A

#include <iostream>
#include <vector>
std::vector<std::vector<int>> maxtrixA, matrixB;
int m, n, r, c;
bool isSubMatrix()
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            
        }
        
    }
    
}
int main()
{
    std::cout<< "Enter row, column of MatrA" ;
    std::cin>> m >> n ;
    std::cout<< "Enter elements of MatrA" <<'\n';
    for (size_t i = 0; i < m; i++)
    {
        std::vector <int> temp;
        for (size_t j = 0; j < n; j++)
        {
            int x;
            std::cin>> x ;
            temp.push_back(x);
        }
        maxtrixA.push_back(temp);
    }
    std::cout<< "Enter row, column of MatrB" ;
    std::cin>> r >> c ;
    std::cout<< "Enter elements of MatrB" <<'\n';
    for (size_t i = 0; i < r; i++)
    {
        std::vector <int> temp;
        for (size_t j = 0; j < c; j++)
        {
            int x;
            std::cin>> x ;
            temp.push_back(x);
        }
        matrixB.push_back(temp);
    }
}