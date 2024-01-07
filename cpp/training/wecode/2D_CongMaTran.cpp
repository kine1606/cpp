
#include <iostream>
#define MAXR 100
#define MAXC 100
void XuatMaTran(int A[][MAXC], int ar, int ac) {
    for (int i = 0; i < ar; i++) {
        for (int j = 0; j < ac; j++)
            std::cout << A[i][j] << "\t";
        std::cout << "\n";
    }
    std::cout << "\n";
}
void NhapMaTran(int x[MAXC][MAXR], int &xr , int& xc)
{
    std::cin >> xr >> xc;
    for (size_t i = 0; i <xr; i++)
    {
       for (size_t j = 0; j < xc; j++)
       {
            std::cin>> x[i][j];
       }
    }
    
}
void Cong2MaTran(int a[][MAXC],int ar,int ac,int b[][MAXC],int br,int bc,int c[][MAXC],int &cr,int &cc)
{
    cr=ar;
    cc=ac;
    for (size_t i = 0; i < cr; i++)
    {
        for (size_t j = 0; j < cc; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    
}
int main() {
    int a[MAXR][MAXC], ar, ac, // Mảng a có (ar dòng x ac cột)
        b[MAXR][MAXC], br, bc, // Mảng a có (br dòng x bc cột)
        c[MAXR][MAXC], cr, cc; // Mảng a có (cr dòng x cc cột)
    NhapMaTran(a, ar, ac);
    NhapMaTran(b, br, bc);
    Cong2MaTran(a, ar, ac, b, br, bc, c, cr, cc);
    XuatMaTran(c, cr, cc);
    return 0;
}
