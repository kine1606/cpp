/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char *MASV;
    char *HoTen;
    char *NgaySinh;
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};
void Nhap(SinhVien *A, int& n)
{
    std::cin >> n;   
    A = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        std::cin.getline(A[i]->MASV, MAXN);
        std::cin.getline(A[i]->HoTen, MAXN);
        std::cin.getline(A[i]->NgaySinh,12);
        std::cin >> (A[i].GioiTinh);
        std::cin >> A[i].DiemToan >> A[i].DiemLy >>A[i].DiemHoa;
        A[i].DTB = (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa)/3;
    }
}
void Xuat (SinhVien *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << A[i].MASV << '\t'
         <<  A[i].HoTen << '\t' 
         << A[i].NgaySinh << '\t'
         << A[i].GioiTinh << '\t'
         << A[i].DiemToan << '\t'
         << A[i].DiemLy << '\t'
         << A[i].DiemHoa << '\t';
        std::cout << fixed << setprecision(2) << A[i].DTB;
        std::cout << '\n';
    }
}
int main() {
    SinhVien *A;
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}
