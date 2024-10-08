#include <iostream>
#include <string>
using namespace std;
class Ve {
protected:
	string ma_ve;
	string ho_ten;
	int nam_sinh;
public:
    Ve() = default;
	Ve(string ma_ve, string ho_ten, int nam_sinh) {
		this->ma_ve = ma_ve;
		this->ho_ten = ho_ten;
		this->nam_sinh = nam_sinh;
	}

	virtual double tinh_tien(){return 0;};
};
class VeTronGoi : public Ve {
private: 
	int so_tro_choi;
public:
	VeTronGoi(string ma_ve, string ho_ten, int nam_sinh) : Ve(ma_ve, ho_ten, nam_sinh) {
		this->so_tro_choi = so_tro_choi;
	}
	virtual double tinh_tien() {
		return 200000;
	}
};
class VeTungPhan : public Ve {
private:
	int so_tro_choi;
	
public:
	VeTungPhan(string ma_ve, string ho_ten, int nam_sinh) : Ve(ma_ve, ho_ten, nam_sinh) {
		this->so_tro_choi = so_tro_choi;
	}
	double tinh_tien() {
		return 70000 + so_tro_choi * 200000;
	}
};

class CongVien {
private:
	int so_ve;
	Ve* ds[50];
public:
	void danh_sach_ve() {
		cout << "Nhap so ve: ";
		cin >> so_ve;
        for (size_t i = 0; i < so_ve; i++)
        {
            ds[i] = new Ve();
        }
        
		double tong_tien = 0;
		int so_ve_tung_phan = 0;
		for (int i = 0; i < so_ve; i++) {
			string ma_ve, ho_ten;
			int nam_sinh, so_tro_choi, loai_ve;
			cout << "Nhap ma ve: ";
			cin >> ma_ve;
			cout << "Nhap ho ten: ";
			cin.ignore();
			getline(cin, ho_ten);
			cout << "Nhap nam sinh: ";
			cin >> nam_sinh;
			cout << "Nhap so tro choi: ";
			cin >> so_tro_choi;
			cout << "Nhap loai ve (1 - Tron Goi, 2 - Tung Phan): ";
			if (loai_ve == 1) {
				ds[i] = new VeTronGoi(ma_ve, ho_ten, nam_sinh);
			}
			else if (loai_ve == 2){
				ds[i] = new VeTungPhan(ma_ve, ho_ten, nam_sinh);
				so_ve_tung_phan++;
			}
			else {
				cout << "Loai ve khong hop le!" << endl;
				i--;
				continue;
			}
			tong_tien += ds[i]->tinh_tien();
		}
		cout << "Tong tien ve: " << tong_tien << "VND" << endl;
		cout << "So luong ve tung phan: " << so_ve_tung_phan << endl;
		
		for (int i = 0; i < so_ve; i++) {
			delete ds[i];
		}
        for (size_t i = 0; i < so_ve; i++)
        {
            delete ds[i];
        }
	}
};


int main() {
	CongVien congvien;
	congvien.danh_sach_ve();
	return 0;
}