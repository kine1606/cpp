#pragma once
#include "CanBo.h"
class NhanVienHanhChinh : public CanBo
{
private:
    int m_DaysOfWorking;
    int m_BonusHour;
    int m_salery;
public:
    NhanVienHanhChinh();
    NhanVienHanhChinh(std::string,std::string,std::string,int,int);

    void setDayOfWorking(int);
    void setBonusHour(int);
    
    int getDayOfWorking();
    int getBonusHour();

    void salery(const int&,const int&);
    void input();
    void output();
    ~NhanVienHanhChinh();
};
