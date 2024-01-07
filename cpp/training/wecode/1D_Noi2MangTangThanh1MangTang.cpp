#include <iostream>
#define MAXN 100000

void NhapMang(int A[], int N) 
{
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}
void XuatMang(int A[], int N) 
{
    std::cout << N << '\n';
    for (int i = 0; i < N; i++)
        {
            std::cout << A[i] << " ";
        }
    std::cout << std::endl;
}
void sapXep(int *c, int nc)
{
     for (int i = 0; i <nc; i++)
        {
            for (int j= i+1; j < nc; j++)
            {
                if(c[j]==c[i])
                continue;
                if (c[j]<c[i])
                {
                    int temp;
                    temp=c[j];
                    c[j]=c[i];
                    c[i]=temp;
                }
            }
            
        }

}
void TronMangTangDan(int c[], int &nc, int a[], int na, int b[], int nb)
{
    nc=nb+na;
    int na1=0;
    int nb1=0;
    for (size_t i = 0; i < na; i++)
    {
        c[i]=a[i];
    }
    for (size_t i = nc-1; i >=nc-na-1; i--)
    {
        c[i]=b[nb1];
        nb1++;
    }
    sapXep(c, nc);
}
int main() 
{
    int a[MAXN], na, b[MAXN], nb, c[MAXN], nc;
    std::cin >> na;
    std::cin >> nb;
    NhapMang(a, na);
    NhapMang(b, nb);
    TronMangTangDan(c, nc, a, na, b, nb);
    XuatMang(c, nc);
    return 0;
}
