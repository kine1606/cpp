 
Đoạn chat
Tìm kiếm trên Messenger

20:06
Tai Loi
Ho Nguyen Tai Loi
#include <string.h>
void Nhap(SinhVien A[],int &n)
{   
    cin>>n;
    for(int i=0;i<n;i++){
    cin >> A[i].MASV;
    cin.ignore(32767,'\n');
    cin.getline(A[i].HoTen, 100);
    cin.getline(A[i].NgaySinh, 100);

    cin >> A[i].GioiTinh;
    cin >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
}
}

void Xuat(SinhVien a[],int n)
{for(int i=0;i<n;i++){
    cout << a[i].MASV << " ";
    
        cout << a[i].HoTen;
    cout << " ";
    cout << a[i].NgaySinh << " " << a[i].GioiTinh << "	" << a[i].DiemToan << "	";
    cout << a[i].DiemLy << "	" << a[i].DiemHoa << "	";
    a[i].DTB = (a[i].DiemToan + a[i].DiemLy + a[i].DiemHoa) / 3;
    cout << setprecision(3) << a[i].DTB<<endl;
}}
Viết cho Ho Nguyen Tai Loi


Ho Nguyen Tai Loi
Ho Nguyen Tai Loi
Đang hoạt động
Trang cá nhân
Tắt thông báo