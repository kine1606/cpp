#include "KhuRungChong.h"
#include "QuaiVat.h"
#include "CamBay.h"
#include "NguoiChoi.h"
#include "DuongHamNui.h"
class Game
{
private:
    CamBay* m_danhSachCamBay[50];
    NguoiChoi* m_nguoiChoi;
    int m_soLuong;
public:
    Game();
    void input();
    // void output();
    // ~Game();
};