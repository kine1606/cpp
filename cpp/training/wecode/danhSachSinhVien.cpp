
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien 
{
    char *MASV;
    char *HoTen;
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};
void Nhap(SinhVien *&A, int &n)
{
    std::cin>> n ;
    std::cin.ignore();
    A= new SinhVien [n];
    A->HoTen = new char[50];
    A->MASV = new char[50];
    for (size_t i = 0; i < n ; i++)
    {
        std::cin.getline(A[i].MASV, 50);
        std::cin.getline(A[i].HoTen, 50);
        std::cin >> A[i].NgaySinh;
        std::cin >> A[i].GioiTinh;   
        std::cin >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
        std::cin.ignore();
        A[i].DTB = (A[i].DiemToan + A[i].DiemHoa + A[i].DiemLy)/3;
    }
}
void Xuat(SinhVien *A, int n)
{
    for (size_t i = 0; i <n; i++)
    {
        std::cout << A[i].MASV << '\t';
        std::cout << A[i].HoTen << '\t';
        std::cout << A[i].NgaySinh <<'\t';
        std::cout << A[i].GioiTinh << '\t';
        std::cout << A[i].DiemToan <<'\t' <<  A[i].DiemLy << '\t' << A[i].DiemHoa ;
        std::cout << A[i].DTB << '\n';
    }
    
}
int main() {
    SinhVien *A;
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}
