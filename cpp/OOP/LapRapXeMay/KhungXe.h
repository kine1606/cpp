#pragma once
#include "Object.h"
class KhungXe : public Object
{
private:
public:
    KhungXe();
    KhungXe(std::string, std::string, std::string);
    long long getDonGia();
    long long donGia(std::string) override;
    friend std::istream& operator>>(std::istream& in, KhungXe&);
    friend std::ostream& operator<<(std::ostream& out, const KhungXe&);
    ~KhungXe();
};