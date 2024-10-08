#include "DoiBong.h"
#include "DoiTamTrung.h"
#include "DoiNoiTroi.h"
class QuanLyDoiBong
{
private:
    DoiBong* m_danhSachDoiBong[32];
    int m_soLuong;
public:
    QuanLyDoiBong()
    {
        std::cin>> m_soLuong ;
        for (size_t i = 0; i < m_soLuong; i++)
        {
            m_danhSachDoiBong[i] = new DoiBong();
        }
    }
    void input()
    {

        for (size_t i = 0; i < m_soLuong; i++)
        {
            int x;
            std::cin>> x ;
            if(x==1)
            {
                m_danhSachDoiBong[i] = new DoiNoiTroi();
            }
            else m_danhSachDoiBong[i] = new DoiTamTrung();
            m_danhSachDoiBong[i]->input();
        }
    }
    void output()
    {
        for (size_t i = 0; i < m_soLuong; i++)
        {
            m_danhSachDoiBong[i]->output();
        }
    }

    ~QuanLyDoiBong();
};
