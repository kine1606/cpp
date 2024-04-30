#include "CaoDang.h"
#include "DaiHoc.h"
#include "SinhVien.h"
int main()
{
    CaoDang cd;
    DaiHoc dh;
    CaoDang cd1("Kien", "23582765", "Ahhii", 170, 9,6.6);
    cd1.output();
    cd.input();
    dh.input();
    cd.output();
    dh.output();
}