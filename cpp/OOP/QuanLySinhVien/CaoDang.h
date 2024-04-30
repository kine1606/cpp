#include "SinhVien.h"
class CaoDang : public SinhVien
{
private:
    double m_graduate;
public:
    CaoDang();
    CaoDang(std::string, std::string, std::string, int, double, double);
    void input();
    void output();
    ~CaoDang();
    bool isGraduate() override;
};
