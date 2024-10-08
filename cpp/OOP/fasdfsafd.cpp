
#include <string>
class CanBo
{
protected:
    std::string m_series;
    std::string m_name;
    std::string m_sex;
public:
    CanBo();
    CanBo(std::string, std::string, std::string);

    friend std::istream& operator>>(std::istream& in, CanBo&);
    friend std::ostream& operator<< (std::ostream& out, const CanBo&);
    virtual std::ostream& output(std::ostream& out) const;

    CanBo& getObj(){return *this;};
    const CanBo& getConstObj() const {return *this;};
    virtual ~CanBo();
};

#include <iostream>
#include <string>

CanBo::CanBo() = default;
CanBo::CanBo(std::string series, std::string name, std::string sex)
{
    m_series =series;
    m_name = name;
    m_sex = sex;
}
std::istream& operator>>(std::istream& in, CanBo& x)
{
    std::cout<< "Nhap ma can bo: ";
    fflush(stdin);
    getline(in, x.m_series);
    std::cout<< "Nhap ten: ";
    fflush(stdin);
    getline(in, x.m_name);
    std::cout<< "Nhap gioi tinh: ";
    fflush(stdin);
    getline(in, x.m_sex);
    return in;
}
std::ostream& CanBo::output(std::ostream& out) const
{
    out<< "===============================" <<'\n';
    out << "Ma can bo: ";
    out<< m_series <<'\n';
    out<< "Ho ten: " << m_name << "\n";
    out<< "Gioi tinh:" << m_sex <<'\n';
    return out;
}

std::ostream& operator<<(std::ostream& out, const CanBo& x)
{
   return x.output(out);
}
CanBo::~CanBo(){}

CanBo x;
std::cout << x;

class GiangVien : public CanBo
{
private:
    int m_teachingTime;
    int m_researchTime;
    long long m_salery;
public:
    GiangVien();
    GiangVien(std::string, std::string,std::string, int, int);

    void salery(const int&);
    void input();
    std::ostream& output(std::ostream& out) const override;
    friend std::istream& operator>>(std::istream& in, GiangVien&);
    friend std::ostream& operator<<(std::ostream& out, const GiangVien&);
    ~GiangVien();
};

#include <iostream>

GiangVien::GiangVien() = default;
GiangVien::GiangVien(std::string series, std::string name, std::string sex, int teachingTime, int researchTime)
{
    m_series = series;
    m_name = name;
    m_sex = sex;
    m_researchTime = researchTime;
    m_teachingTime = teachingTime;
}

void GiangVien::salery(const int& DonGia) 
{
    m_salery = (m_researchTime + m_teachingTime) * DonGia;
}

std::ostream& GiangVien::output(std::ostream& out) const
{
    // recursive infinitely
    // out << CanBo::getConstObj();

    // no idea how to transfer to "out << getObj()"
    // but this is completely the same effort to print out CanBo portion
    CanBo::output(out);

    out << "So gio nghien cuu: "<< m_researchTime <<'\n';
    out << "So gio giang day: "<< m_teachingTime<<'\n';
    out << "Luong= " << m_salery <<'\n';
    return out;
}

GiangVien::~GiangVien(){}
std::istream& operator>> (std::istream& in, GiangVien& x)
{
    in >> x.CanBo::getObj();
    std::cout<< "Nhap so gio nghien cuu:";
    in>> x.m_researchTime ;
    std::cout<< "Nhap so gio giang day: ";
    in>> x.m_teachingTime ;
    std::cout<< "Don Gia:";
    int donGia;
    in>> donGia ;
    x.salery(donGia);
    return in;
}

int main()
{
  GiangVien gv = GiangVien();
  std::cin >> gv;
  std::cout << gv;
  return 0;
}
