#include "DuAn.h"
#include "CongViec.h"
#include "User.h"

class QuanTriCongViec
{
private:
    DuAn* m_danhSachDuAn[50];
    User* m_danhSachUser[50];
    int m_soLuongUser;
    int m_soLuongDuAn;
public:
    QuanTriCongViec();
    void input();
    void output();
    ~QuanTriCongViec();
};