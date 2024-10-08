#include "BinaryOptionObject.h"
#define MAXN 50
class QuanLyTroChoi
{
private:
    BinaryOptionObject* m_danhSach[MAXN];
    int m_soLuong;
public:
    QuanLyTroChoi();
    void input();
    void output();
    ~QuanLyTroChoi();
};
