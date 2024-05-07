#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string maSoSinhVien;
    string hoTen;
    string namSinh;
    char gioiTinh;
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTrungBinh;
};
int main() 
{
    // int n;
    // cout << "Nhap so luong sinh vien: ";
    // cin >> n;

    SinhVien danhSachSinhVien[3];

    for (int i = 0; i < 3; i++) {
        cout << "Nhap thong tin cho sinh vien thu " << i + 1 << ":" << endl;
        cout << "Ma so sinh vien: ";
        cin >> danhSachSinhVien[i].maSoSinhVien;
        cout << "Ho va ten: ";
        cin.ignore();
        getline(cin, danhSachSinhVien[i].hoTen);
        cout << "Nam sinh: ";
        cin >> danhSachSinhVien[i].namSinh;
        cout << "Gioi tinh: ";
        cin >> danhSachSinhVien[i].gioiTinh;
        cout << "Diem toan: ";
        cin >> danhSachSinhVien[i].diemToan;
        cout << "Diem ly: ";
        cin >> danhSachSinhVien[i].diemLy;
        cout << "Diem hoa: ";
        cin >> danhSachSinhVien[i].diemHoa;

        // Tính điểm trung bình
        danhSachSinhVien[i].diemTrungBinh = (danhSachSinhVien[i].diemToan + danhSachSinhVien[i].diemLy + danhSachSinhVien[i].diemHoa) / 3;
    }

    // Xuất thông tin của danh sách sinh viên
    cout << "\nDanh sach sinh vien vua nhap:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Thong tin cho sinh vien thu " << i + 1 << ":" << endl;
        cout << "Ma so sinh vien: " << danhSachSinhVien[i].maSoSinhVien << endl;
        cout << "Ho va ten: " << danhSachSinhVien[i].hoTen << endl;
        cout << "Nam sinh: " << danhSachSinhVien[i].namSinh << endl;
        cout << "Gioi tinh: " << danhSachSinhVien[i].gioiTinh << endl;
        cout << "Diem toan: " << danhSachSinhVien[i].diemToan << endl;
        cout << "Diem ly: " << danhSachSinhVien[i].diemLy<< endl;
        cout<< "Diem hoa: "<< danhSachSinhVien[i].diemHoa << endl;
    }
}