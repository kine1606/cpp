/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

void tamGiacCanChuSo_3() {
// 2*h -1 khoang? 
    int h;
    std::cin >> h;
    if (h<3 || h>9)
    {
        std::cout << "Khong thoa dieu kien nhap.";
        return ;
    }
    for (int i = 1; i <=h; i++)
    {
        int index(h-i);
        while (index)
        {
            std::cout << "  ";
            index--;
        }
        for (int j = 1; j<=i; j++)
        {
            std::cout << j << "   ";
        }
        std::cout << '\n';
    }
}

int main() {
    tamGiacCanChuSo_3();
    return 0;
}
