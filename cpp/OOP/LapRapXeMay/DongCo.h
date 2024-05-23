#pragma once
#include "Object.h"
#include <string>
class DongCo : public Object
{
private:
    int m_tieuChuan;
public:
    DongCo();
    DongCo(std::string, std::string, std::string);
    long long getDonGia();
    long long donGia(std::string) override;
    friend std::ostream& operator<<(std::ostream& out, const DongCo&);
    friend std::istream& operator>>(std::istream& in, DongCo&);
    ~DongCo();
};
