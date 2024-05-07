/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

void hinhVuong_DacBiet_1();
int main() {
    hinhVuong_DacBiet_1();
    return 0;
}
void hinhVuong_DacBiet_1()
{
    int h;
    std::cin >> h;
    if (h<3 || h>20)
    {
        std::cout << "Khong thoa dieu kien nhap.";
        return;
    }
    for (int i = 1; i <=h; i++)
    {
        std::cout << "* ";
        for (int j = 1; j <=h-2; j++)
        {
            if (i==j+1)
            {
                std::cout << "=";
            }
            else std:: cout << "  ";
        }
        if (i==1)
        {
            std::cout << "$\n";
            continue;
        }
        
        if (i!=h)
        {
        std::cout << " $\n";
        }
        else std::cout << "=";
    }
}
    

