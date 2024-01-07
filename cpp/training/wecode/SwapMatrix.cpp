#include <iostream>
#include <ctime>
#define MAX 1000
void NhapMang(int a[][MAX], int& hang, int& cot)
{
    std::cin >> hang >> cot;
    srand(time(NULL));
    for (size_t i = 0; i < hang; i++)
    {
        for (size_t j= 0; j < cot; j++)
        {
            a[i][j]=rand();
        }
    }

}
void XuatMang(int a[][MAX],int hang, int cot)
{
    for (size_t i = 0; i <hang; i++)
    {
        for (size_t j = 0; j < cot; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << '\n';
    }   
}
void ChuyenVi(int a[][MAX], int hang, int cot)
{
    for (size_t i = 0; i <cot; i++)
    {
        for (size_t j = 0; j < hang; j++)
        {
            std::cout << a[j][i] << " ";
        }
        std::cout << '\n';
    }
    
}
int main(){
    int hang(0);
    int cot(0);
    int a[MAX][MAX];
    NhapMang(a,hang,cot);
    XuatMang(a,hang,cot);
    ChuyenVi(a,hang,cot);
}