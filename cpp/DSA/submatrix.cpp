#include <iostream>
#include <vector>

void input(int &m, int &n, std::vector <std::vector<int>> &matrix, int& r, int& c, std::vector <std::vector<int>>& submatrix)
{
    std::cin>> m >> n ;
    std::vector <std::vector<int>> matrix;
    for (size_t i = 0; i < m; i++)
    {
        std::vector<int> temp;
        for (size_t i = 0; i < n; i++)
        {
            int x;
            std::cin>> x ;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }
    std::cin>> r >> c ;
    std::vector <std::vector<int>> submatrix;
    for (size_t i = 0; i < r; i++)
    {
        std::vector<int> temp;
        for (size_t i = 0; i < c; i++)
        {
            int x;
            std::cin>> x ;
            temp.push_back(x);
        }
        submatrix.push_back(temp);
    }

}
int main()
{
    int n, m, r, c;
    std::vector <std::vector<int>> matrix;
    std::vector <std::vector<int>> submatrix;
    input(m, n, matrix, r, c, submatrix);
    
}