#include "IntSet.h"
#include <iostream>
int main(){
    int * values = new int[2];
    values[0]=1;
    values[1]=1;
    IntSet s1, s2(values,2),s3; //nếu 2 phần tử giống nhau thì chỉ lưu trữ 1 lần trong tập hợp
    std::cout<< "s2 = " << s2 <<'\n';
    std::cin >> s1 >> s2;
    std::cout<< "s1= "  << s1 <<'\n';
    std::cout<< "s2= "  << s2 <<'\n';

    s3 = s1 + s2; //hợp s1 và s2, union
    std::cout<< "s1+s2 = "  << s3 <<'\n';
    s3 = s1 - s2; //phép bù, diff
    std::cout<< "s1-s2 = "  << s3 <<'\n';
    // std::cout << s1 << '\n' << s2[0] << '\n';
    std::cout << "(s1 == s2)=" << (s1 == s2);
    return 0;
}