#include <stdio.h>
int main()
{

// 1.Tiêu thụ điện dưới 50kWh, mỗi kWh là 3.500 đồng
// từ 51-100kWh mỗi kWh là 2.850 đồng
// trên 100kWh, mỗi kWh là 2k đồng 
// trên 150kWh, tổng bill giảm 15%     
    double n;
    double tienDien;
    printf("Nhap so kWh: ");
    scanf("%d", &n);
    if(n <= 50) tienDien += n * 3500;
    else if(n> 50 && n <= 100) tienDien += 50*3500 + (n-50) * 2850;
    else 
    {
        tienDien += 50*3500 + 50 * 2850 + (n-100)* 2000;
        if(n > 150) tienDien *= 0.9;
    }
    printf ("Tong tien dien: ", tienDien);
}