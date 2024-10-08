#include "VatPham.h"
#include "XeTang.h"
#include "Boss.h"
class Game
{
private:
    VatPham* m_danhSachVatPham[50];
    XeTang* m_danhSachXeTang[50];
    Boss* BOSS;
    int m_soLuong;
public:
    Game();
    void input();
    void output();
    // ~Game();
};
