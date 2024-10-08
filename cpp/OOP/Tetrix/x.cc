#include <iostream>
#include <math.h>
#include <string>

using namespace std;

const int SO_NHAN_VIEN_TOI_DA = 100;

class NhanVien {
protected:
	char ten[100];
	char ngay_sinh[11];
	double luong_co_ban;
public: 
	void set_ten(const char* t) {
		strcpy_s(ten, t);
	}

	void set_ngay_sinh(const char* ns) {
		strcpy_s(ngay_sinh, ns);
	}

	void set_luong_co_ban(double luong) {
		luong_co_ban = luong;
	}

	virtual double tinh_luong() = 0;
	virtual void nhap_thong_tin() = 0;

	void xuat_thong_tin() {
		cout << "Ten" << ten << endl;
		cout << "Ngay thang nam sinh: " << ngay_sinh << endl;
		cout << "Luong: " << tinh_luong() << endl;
 	}
};

class NhanVienSanXuat : public NhanVien {
private:
	int so_san_pham;
public:
	void nhap_thong_tin() {
		cout << "Nhap so san pham: ";
		cin >> so_san_pham;
	}

	double tinh_luong() {
		return luong_co_ban + so_san_pham * 5000;
	}
};

class NhanVienVanPhong : public NhanVien {
private:
	int so_ngay_lam_viec;
public:
	void nhap_thong_tin() {
		cout << "Nhap so ngay lam viec: ";
		cin >> so_ngay_lam_viec;
	}

	double tinh_luong() {
		return so_ngay_lam_viec;
	}
};

void them_nhan_vien(NhanVien* nhan_vien[], int& so_nhan_vien) {
	char loai_nhan_vien;
	cout << "Nhap loai nhan vien (S - San suat, V - Van phong): ";
	cin >> loai_nhan_vien;

	char ten[100];
	char ngay_sinh[11];
	double luong_co_ban;

	cout << "Nhap ten: ";
	cin.ignore();
	cin.getline(ten, 100);

	cout << "Nhap ngay sinh (DD/MM/YYYY): ";
	cin.getline(ngay_sinh, 11);

	cout << "Nhap luong co ban: ";
	cin >> luong_co_ban;

	if (loai_nhan_vien == 'S' || loai_nhan_vien == 's') {
		NhanVienSanXuat* nv = new NhanVienSanXuat();
		nv->set_ten(ten);
		nv->set_ngay_sinh(ngay_sinh);
		nv->set_luong_co_ban(luong_co_ban);
		nv->nhap_thong_tin();

		nhan_vien[so_nhan_vien++] = nv;
	}
	else if (loai_nhan_vien == 'V' || loai_nhan_vien == 'v') {
		NhanVienVanPhong* nv = new NhanVienVanPhong();
		nv->set_ten(ten);
		nv->set_ngay_sinh(ngay_sinh);
		nv->set_luong_co_ban(luong_co_ban);
		nv->nhap_thong_tin();

		nhan_vien[so_nhan_vien++] = nv;
	}
	else {
		cout << "Loai nhan vien khong hop le! " << endl;
	}
}

void tinh_luong(NhanVien* nhan_vien[], int so_nhan_vien) {
	for (int i = 0; i < so_nhan_vien; i++) {
		nhan_vien[i]->tinh_luong();
	}
	cout << "Da tinh luong thanh cong!" << endl;
}

void xuat_thong_tin_nhan_vien(NhanVien* nhan_vien[], int so_nhan_vien) {
	for (int i = 0; i < so_nhan_vien; i++) {
		nhan_vien[i]->xuat_thong_tin();
		cout << endl;
	}
}

double tinh_tong_luong(NhanVien* nhan_vien[], int so_nhan_vien) {
	double tong_luong = 0;
	for (int i = 0; i < so_nhan_vien; i++) {
		tong_luong += nhan_vien[i]->tinh_luong();
	}
	return tong_luong;
}

void tim_luong_cao_nhat_thap_nhat(NhanVien* nhan_vien[], int so_nhan_vien) {
	double luong_cao_nhat = 0;
	double luong_thap_nhat = nhan_vien[0]->tinh_luong();
	for (int i = 0; i < so_nhan_vien; i++) {
		double luong = nhan_vien[i]->tinh_luong();
		if (luong > luong_cao_nhat) {
			luong_cao_nhat = luong;
		}
		if (luong < luong_thap_nhat) {
			luong_thap_nhat = luong;
		}
	}
	cout << "Luong cao nhat: " << luong_cao_nhat << endl;
	cout << "Luong thap nhat: " << luong_thap_nhat << endl;
}

void sap_xep_theo_luong(NhanVien* nhan_vien[], int so_nhan_vien) {
	for (int i = 0; i < so_nhan_vien - 1; i++) {
		for (int j = 0; j < so_nhan_vien - i - 1; j++) {
			if (nhan_vien[j]->tinh_luong() < nhan_vien[j + 1]->tinh_luong()) {
				NhanVien* tam = nhan_vien[j];
				nhan_vien[j] = nhan_vien[j + 1];
				nhan_vien[j + 1] = tam;
			}
		}
	}

	cout << "Danh sach nhan vien sau khi sap xep theo luong giam dan:" << endl;
	for (int i = 0; i < so_nhan_vien; i++) {
		nhan_vien[i]->xuat_thong_tin();
		cout << endl;
	}
}

int main() {
	NhanVien* nhan_vien[SO_NHAN_VIEN_TOI_DA];
	int so_nhan_vien = 0;
	char lua_chon;

	do {
		cout << "1. Them nhan vien." << endl;
		cout << "2. Tinh tien luong." << endl;
		cout << "3. Thong tin nhan vien." << endl;
		cout << "4. Tong tien luong cua nhan vien." << endl;
		cout << "5. Tim nhan vien co luong cao nhat/thap nhat." << endl;
		cout << "6. Danh sach nhan vien theo luong giam dan." << endl;
		cout << "0. Thoat" << endl;
		cout << "Nhap lua chon: ";
		cin >> lua_chon;

		switch (lua_chon) {
		case '1':
			them_nhan_vien(nhan_vien, so_nhan_vien);
			break;
		case '2':
			tinh_luong(nhan_vien, so_nhan_vien);
			break;
		case '3':
			xuat_thong_tin_nhan_vien(nhan_vien, so_nhan_vien);
			break;
		case '4':
			cout << "Tong tien luong: " << tinh_tong_luong(nhan_vien, so_nhan_vien) << endl;
			break;
		case '5':
		    tim_luong_cao_nhat_thap_nhat(nhan_vien, so_nhan_vien);
			break;
		case '6':
			sap_xep_theo_luong(nhan_vien, so_nhan_vien);
			break;
		case '0':
			cout << "Thoat chuong trinh..." << endl;
			break;
		default:
			cout << "Lua chon khong hop le. Vui long chon lai!" << endl;
		}
	} while (lua_chon != '0');

	for (int i = 0; i < so_nhan_vien; i++) {
		delete nhan_vien[i];
	}

	return 0;
}
