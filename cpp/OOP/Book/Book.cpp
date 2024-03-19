#include "Book.h"
#include <iostream>
#include <string>
// default constructor
Book::Book()
{
    m_Series = "000000";
    m_Name = "No_name";
    m_Birth = 0;
    m_Sheet = 0;
}

// init constructor
Book::Book(std::string series, std::string name, int birth, int sheet):
m_Series(series),m_Name(name),m_Birth(birth),m_Sheet(sheet){};

// input & output
void Book::input()
{
    std::cin.ignore();
    std::cout<< "Nhap ma so sach: ";
    std::getline(std::cin, m_Series);
    std::cout<< "Nhap ten sach: ";
    std::getline(std::cin, m_Name);
    std::cout<< "Nhap nam xuat ban: ";
    std::cin>> m_Birth ;
    std::cout<< "Nhap so trang sach: ";
    std::cin>> m_Sheet ;
}

void Book::output() const
{
    std::cout<< "=========================" <<'\n';
    std::cout<< "Ma so sach: " << m_Series << '\n';
    std::cout<< "Ten sach: " << m_Name << '\n';
    std::cout<< "Nam xuat ban: " << m_Birth << '\n';
    std::cout<< "So trang sach: " << m_Sheet << '\n';
    std::cout<< "=========================" <<'\n';
}

// get func
int Book::get_Birth() const 
{
    return m_Birth;
}
int Book::get_Sheet() const 
{
    return m_Sheet;
}
std::string Book::get_series() const
{
    return m_Series;
}
std::string Book::get_name() const
{
    return m_Name;
}
Book Book::get_Book() const
{
    Book temp;
    temp.m_Birth = m_Birth;
    temp.m_Name = m_Name;
    temp.m_Series = m_Series;
    temp.m_Sheet = m_Sheet;
    return temp;
}

// set func
void Book::set_Birth(int Birth)
{
    m_Birth = Birth;
}
void Book::set_name(const std::string& name)
{
    m_Name = name;   
}
void Book::set_series(const std::string& series)
{
    m_Series = series;
}
void Book::set_Sheet(int sheet)
{
    m_Sheet = sheet;
}
void Book::set_Book(const std::string& name, const std::string& series, int year, int sheet)
{
    m_Series = series;
    m_Birth = year;
    m_Name = name;
    m_Sheet = sheet;
}

void Book::Update_Book()
{
    std::cout<< "==========================" <<'\n';
    std::cout<< "Chon chuc nang:" <<'\n';
    std::cout<< "0. Thoat" <<'\n';
    std::cout<< "1. Thay doi ma so sach\n";
    std::cout<< "2. Thay doi ten sach" <<'\n';
    std::cout<< "3. Thay doi nam xuat ban" <<'\n';
    std::cout<< "4. Thay doi so trang sach" <<'\n';
    std::cout<< "==========================" <<'\n';
    while(true)
    {
        int number;
        do
        {
            std::cout<< "Nhap so: ";
            std::cin>> number ;
            if(number <0 || number >4) std::cout<< "Nhap lai di hihi" <<'\n';
        } while (number <0 || number >4);

        if(number == 0) break;

        if(number==1)
        {
            std::cout<< "Ma so cu: " << m_Series << '\n';
            std::cout<< "Nhap ma so moi: " <<'\n'; 
            std::cin.ignore();
            std::getline(std::cin, m_Series);
            std::cout << "Ma so moi: " << m_Series <<'\n';
        }
        else if(number == 2)
        {
            std::cout<< "Ten sach cu: " << m_Name << '\n';
            std::cout<< "Nhap ten sach moi: " <<'\n'; 
            std::cin.ignore();
            std::getline(std::cin, m_Name);
            std::cout<< "Ten sach moi: " << m_Name <<'\n';
        }
        else if(number == 3)
        {
            std::cout<< "Nam xuat ban cu: " << m_Birth << '\n';
            std::cout<< "Nhap nam xuat ban moi: " <<'\n'; 
            std::cin>> m_Birth ;
            std::cout<< "Nam xuat ban moi: " << m_Birth <<'\n';
        }
        else if(number == 4)
        {
            std::cout<< "So trang sach cu: " << m_Sheet << '\n';
            std::cout<< "Nhap so trang sach moi: " <<'\n'; 
            std::cin>> m_Sheet ;
            std::cout<< "So trang sach moi: " << m_Sheet <<'\n';
        }
        std::cout<< "Da Luu !!!\n" <<'\n';
    }
}
Book::~Book(){std::cout<< "END!" <<'\n';}

////////////////////////////////////////////////////////////////////////////////////

ListBook::ListBook() = default;

void ListBook::Linput()
{
    std::cin>> m_n ;
    for (size_t i = 0; i < m_n; i++)
    {
        m_List[i].input();
    }
}

void ListBook::Loutput() const
{
    for (size_t i = 0; i < m_n; i++)
    {
        m_List[i].output();
    }
}

Book ListBook::LatestBook() const
{
    int pivot = 0;
    for (size_t i = 1; i < m_n; i++)
    {
        if(m_List[pivot].m_Birth < m_List[i].m_Birth)
        {
            pivot = i;
        }
    }
    return m_List[pivot];
}

//destructor
ListBook::~ListBook()
{
    delete m_List;
    std::cout<< "\nEND!" <<'\n';
}
