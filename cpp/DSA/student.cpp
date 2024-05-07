#include <iostream>
#include <string>
int main()
{
    std::string MSSV;
    std::string name;
    double toan, van, ly, hoa;
    std::cout<< "Nhap MSSV: ";
    std::getline(std::cin, MSSV);
    std::cout<< "Nhap ten: " ;
    std::getline(std::cin, name);
    std::cout<< "Nhap diem: " ;
    std::cin>> toan >> van >> ly >> hoa ;
    double diemTB = (toan+van+ly+hoa)/4;
    
    std::cout<< "============================" <<'\n';
    std::cout<< "MSSV: " << MSSV <<'\n';
    std::cout<< "Ho va ten: " << name <<'\n';
    std::cout<< "Diem trung binh: "<< diemTB <<'\n';
}