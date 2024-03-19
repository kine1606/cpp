#include "Book.h"
#include <iostream>
int main()
{
    ListBook danhsach;
    danhsach.Linput();
    danhsach.Loutput();
    Book Latest = danhsach.LatestBook();
    std::cout << "Sach xuat ban gan nhat:'\n";
    Latest.output();
}