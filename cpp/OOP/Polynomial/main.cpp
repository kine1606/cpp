#include "Polynomial.h"
#include <iostream>
int main()
{
    Polynomial dathuc1, dathuc2, tong, hieu;
    dathuc1.input_Polynomial();
    dathuc2.input_Polynomial();
    tong = dathuc1.Plus_polynomial(dathuc2);
    std::cout<< "Da thuc cua tong la:" <<'\n';
    tong.output_Polynomial();
    hieu = dathuc1.Minus_polynomial(dathuc2);
    std::cout<< "Da thuc cua hieu la:" <<'\n';
    hieu.output_Polynomial();
    std::cout << "\nNhap x0 =";
    int x;
    std::cin >> x;
    std::cout << "Gia tri tong tai x0 = " << tong.Calc_xzero(x) << '\n';
    std::cout<< "Gia tri hieu tai x0 = " << hieu.Calc_xzero(x) <<'\n';
}