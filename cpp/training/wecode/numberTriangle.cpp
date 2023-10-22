/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

void tamGiacCanChuSo_4();

int main() {
    tamGiacCanChuSo_4();
    return 0;
}

void tamGiacCanChuSo_4() {
    int h;
    std::cin >> h;
    if (h<3 || h>9)
    {
        std::cout << "Khong thoa dieu kien nhap.";
        return ;
    }
    for (int i = h+1; i >0; i--)
    {
        int index(h+2-i);
        for (int j = 1; j<=i-1 ; j++)
        {
            std::cout << j << "   ";
        }
        std::cout << '\n';
        while (index)
        {
            std::cout << "  ";
            index--;
        }
    }
    
}
