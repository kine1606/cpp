#include <iostream>
#include <string>
#include <vector>
struct nhanVien
{
    std::string maSo;
    std::string hoTen;
    std::string phongBan;
    int luong;
    int thuong;
    int thuclanh ;
};
void input(nhanVien *DSNV, int n, int &tongThucLanh, std::vector <int> &index)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< i+1 << "." <<'\n';
        std::cin.ignore();
        std::getline(std::cin, DSNV[i].maSo);
        std::getline(std::cin, DSNV[i].hoTen);
        std::getline(std::cin, DSNV[i].phongBan);
        std::cin>> DSNV[i].luong >> DSNV[i].thuong ;
        if(DSNV[i].thuong >=1200000)  
        {
            index.push_back(i);
        }
        DSNV[i].thuclanh = DSNV[i].luong + DSNV[i].thuong;
        tongThucLanh += DSNV[i].thuclanh;
    }
}
void lowestSalery(nhanVien *DSNV, int n)
{

    int lowest_index = 0;
    for (size_t i = 1; i < n; i++)
    {
        if(DSNV[i].luong < DSNV[lowest_index].luong)
        {
            lowest_index = i;
        }
    }
    std::cout<< "Nhan vien co luong co ban thap nhat: " <<'\n';
    for (size_t i = 0; i < n; i++)
    {
        if(DSNV[i].luong == DSNV[lowest_index].luong)
        {
            std::cout<< DSNV[i].hoTen <<'\n';
        }
    }
}
void soSanhPhongBan(nhanVien *DSNV, int n)
{
    int count(0);
    int coconut(0);
    std::vector <int> indexible;
    for (size_t i = 0; i < n; i++)
    {
        int min_index = i;
        for (size_t j = i+1; j < n-1; j++)
        {
            while(DSNV[i].phongBan[count]!='\0')
            {
                if(DSNV[i].phongBan[count] == '\0')
                {
                    while (true)
                    {
                        if(DSNV[i].maSo[coconut] > DSNV[j].maSo[coconut])
                        {
                            min_index=j;
                            break;
                        }
                    }
                    
                }
                if(DSNV[i].phongBan[count] > DSNV[j].phongBan[count])
                {
                    min_index=j;
                    break;
                }
                count++;
            }
            indexible.push_back(min_index);
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< DSNV[indexible[i]].hoTen <<'\n';
    }
    
}
int main()
{
    int n;
    std::cin>> n ;
    nhanVien *DSNV = new nhanVien[n];
    std::vector <int> index;
    int tongThucLanh(0);

    input(DSNV, n, tongThucLanh, index);

    //a.Tính tổng thực lãnh tháng của tất cả nhân viên trong công ty
    std::cout<< "Tong thuc lanh = " << tongThucLanh <<'\n';
    std::cout<< "==================================" <<'\n';

    //b.In danh sách những nhân viên có mức lương cơ bản thấp nhất.
    lowestSalery(DSNV, n);
    std::cout<< "==================================" <<'\n';

    //c.Đếm số lượng nhân viên có mức thưởng >= 1200000.
    int i(0);
    std::cout<< "Danh sach nhan vien co muc thuong >=1200000: " <<'\n';
    while(!index.empty())
    {
        std::cout<< ++i << "." << DSNV[index.back()].hoTen<<'\n';
        index.pop_back();
    }
    std::cout<< "==================================" <<'\n';

    //d.In danh sách các nhân viên tăng dần theo phòng ban, nếu phòng ban trùng nhau thì
    //giảm dần theo mã nhân viên.
    soSanhPhongBan(DSNV, n);
}