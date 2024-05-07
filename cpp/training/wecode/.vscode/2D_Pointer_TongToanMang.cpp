
#include <iostream>
using namespace std;
void NhapMang(int **&, int &, int &);
int TongToanMang(int **&, const int &, const int &);

int main(){
    int **a, r, c;
    NhapMang(a, r, c);
    cout << TongToanMang(a, r, c);
    return 0;
}

void NhapMang(int **&a, int& r, int& c)
{
    std::cin>> r >> c;  
    a=new int*[r];
    for (size_t i = 0; i <r; i++)
    {
        a[i]= new int [c];
    }
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j= 0; j < c; j++)
        {
            std::cin>> a[i][j];
        }
    }
}
int TongToanMang(int **&a, const int& r , const int& c)
{
    int sum(0);
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j= 0; j < c; j++)
        {
            sum+=a[i][j];
        }
    }
    return sum;
}