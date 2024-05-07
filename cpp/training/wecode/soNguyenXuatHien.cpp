
#include <iostream>
#define MAXN 100

struct SONGUYEN {
    int a; // số nguyên cần đếm số lần xuất hiện trong mảng A
    int count; // Số lần xuất hiện của số nguyên a trong A
};
void NhapMang(int *a, int &na)
{
    std::cin>> na ;
    for (size_t i = 0; i < na; i++)
    {
        std::cin>> a[i] ;
    }   
}
void DemSoLanXuatHien(int *a, int na, SONGUYEN b[MAXN], int &nb)
{
    int index(0);
    for (size_t i = 0; i <=na; i++)
    {
        int pivot =a[i];
        int count(1);
        for (size_t j = i+1; j <=na-1; j++)
        {
            if(a[i]==a[j]) 
            {
            count++;
            int temp= a[na-1];
            a[na-1]=a[j];
            a[j]=temp;
            }
            na-=count-1;
        }
            b[index++] = {pivot, count};
    }
    nb=index-1;
}
void Xuat(SONGUYEN *a, int n) {
    for (int i = 0; i < n; i++)
        std::cout << a[i].a << " xuat hien " << a[i].count << " lan"
                  << std::endl;
}

int main() {
    int a[MAXN];
    SONGUYEN b[MAXN];
    int na, nb;

    NhapMang(a, na);

    DemSoLanXuatHien(a, na, b, nb);

    Xuat(b, nb); // Chú ý hàm này template đã có viết sẵn!!!

    return 0;
}
