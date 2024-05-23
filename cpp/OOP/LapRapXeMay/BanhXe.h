#pragma once
#include "Object.h"
#include <string>
class BanhXe : public Object
{
public:
    BanhXe();
    BanhXe(std::string, std::string, std::string);
    BanhXe(const BanhXe&);
    long long getDonGia();
    long long donGia(std::string) override;
    friend std::ostream& operator<<(std::ostream& out, const BanhXe&);
    friend std::istream& operator>>(std::istream& in, BanhXe&);
    ~BanhXe();
};

