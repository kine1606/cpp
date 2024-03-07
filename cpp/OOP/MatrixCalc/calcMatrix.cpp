#include <iostream>
#define MAXN 100
void input(int &n, int matrix1[][MAXN], int matrix2[][MAXN])
{
    std::cin>> n ;
    std::cout<< "Ma tran 1: " <<'\n';
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin>> matrix1[i][j];
        }
    }
    std::cout<< "Ma tran 2: " <<'\n';
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin>> matrix2[i][j];
        }
    }
}

void tong(const int n, int matrix1[][MAXN], int matrix2[][MAXN])
{
    int sum[MAXN][MAXN];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    std::cout<< "Tong 2 ma tran: " <<'\n';
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(sum[i][j] >= 10 || sum[i][j] <= -10)
                std::cout << sum[i][j] << " ";
            else if(sum[i][j] > -10 && sum[i][j] <0)
                std::cout<< sum[i][j] << " ";
            else 
                std::cout<< sum[i][j] << "  ";
        }
        std::cout <<'\n';
    }
    std::cout <<'\n';
}
void hieu(const int n, int matrix1[][MAXN], int matrix2[][MAXN])
{
    int hieu[MAXN][MAXN];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        { 
            hieu[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    std::cout<< "Hieu 2 ma tran : " <<'\n';
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(hieu[i][j] >= 10 || hieu[i][j] <= -10)
                std::cout << hieu[i][j] << " ";
            else if(hieu[i][j] > -10 &&hieu[i][j] <0)
                std::cout<< hieu[i][j] << " ";
            else 
                std::cout<< hieu[i][j] << "  ";
        }
        std::cout <<'\n';
    }
    std::cout <<'\n';
}
void tich(const int n, int matrix1[][MAXN], int matrix2[][MAXN])
{
    int tich[MAXN][MAXN];
    for(size_t i = 0; i < n ; i++)
    {

        for(size_t j = 0; j < n; j++) 
        {
            int sum=0;
            for(size_t k = 0; k < n; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
            tich[i][j] = sum;
        } 
    }
    std::cout<< "Tich 2 ma tran: " <<'\n';
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(tich[i][j] >= 10 || tich[i][j] <= -10)
                std::cout << tich[i][j] << " ";
            else if(tich[i][j] > -10 &&tich[i][j] <0)
                std::cout<< tich[i][j] << " ";
            else 
                std::cout<< tich[i][j] << "  ";
        }
        std::cout <<'\n';
    }
}
int main()
{   
    int n;
    int matrix1[MAXN][MAXN], matrix2[MAXN][MAXN]; 
    input(n, matrix1, matrix2);
    tong(n, matrix1, matrix2);
    hieu(n, matrix1, matrix2);
    tich(n, matrix1, matrix2);
}