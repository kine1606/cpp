#pragma once
#include <iostream>
#include <string>
class Book
{
public:
    Book();
    Book(std::string, std::string, int, int);

    void input();
    void output() const;
    
    void set_Book(const std::string&, const std::string&, int, int);
    void set_series(const std::string&);
    void set_name(const std::string&);
    void set_Birth(int);
    void set_Sheet(int);

    std::string get_series() const;
    std::string get_name() const;
    int get_Birth() const;
    int get_Sheet() const;
    Book get_Book() const;

    void Update_Book();
    ~Book();
private:
    std::string m_Series;
    std::string m_Name;
    int m_Birth;
    int m_Sheet;

    friend class ListBook;
};

class ListBook
{
private:
    int m_n;
    Book* m_List = new Book [m_n];
public:
    ListBook();
    void Linput();
    void Loutput() const;
    Book LatestBook() const;
    ~ListBook();
};
