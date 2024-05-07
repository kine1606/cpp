#include <iostream>
#include "psClass.h"
int main()
{   
    Phan_So ps1;
    std::cout<< "Enter first: " ;
    ps1.input();

    std::cout<< "Enter second: " ;
    Phan_So ps2;
    ps2.input();
    
    // tinh tong 2 phan so 
    std::cout<< "Sum :";
    Phan_So tong;
    tong.clone(ps1);
    tong.plus(ps2);
    tong.simplified();
    tong.output();

    // tinh hieu 2 phan so
    std::cout << "Difference: ";
    Phan_So hieu;
    hieu.clone(ps1);
    hieu.minus(ps2);
    hieu.simplified();
    hieu.output();

    // tinh tich 2 phan so 
    std::cout << "Multiple: ";
    Phan_So tich;
    tich.clone(ps1);
    tich.mult(ps2);
    tich.simplified();
    tich.output();

    //tinh thuong 2 phan so 
    std::cout << "Division: ";
    Phan_So thuong;
    thuong.clone(ps1);
    thuong.div(ps2);
    thuong.simplified();
    thuong.output();

    // so sanh 2 phan so 
    Phan_So cmp;
    int check = ps1.compare(ps2);
    if(check == 1) std::cout<< "ps1 > ps2" <<'\n';
    else if(check == 0) std::cout<< "ps1 = ps2" <<'\n';
    else std::cout<< "ps1 < ps2" <<'\n';
}