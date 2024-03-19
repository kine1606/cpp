#include "ComplexNumber.h"
#include <iostream>
int main()
{
    ComplexNumber cn1, cn2;
    cn1.input();
    cn2.input();
    ComplexNumber sum, diff, mult, div;
    sum = cn1.sum(cn2);

    diff = cn1.diff(cn2);

    mult = cn1.mult(cn2);

    div = cn1.div(cn2);
    //output timeeeeeeeee 

    cn1.output();
    std::cout <<'\n';
    cn2.output();
    std::cout <<'\n';

    std::cout<< "Tong cua 2 so thuc la " <<'\n';
    sum.output();
    std::cout <<'\n';
    
    std::cout<< "Hieu cua 2 so thuc la " <<'\n';
    diff.output();
    std::cout <<'\n';
    
    std::cout<< "Tich cua 2 so thuc la " <<'\n';
    mult.output();
    std::cout <<'\n';

    std::cout<< "Thuong cua 2 so thuc la " <<'\n';
    cn1.output();
    std::cout <<'\n';
    
    cn1.changeReal();
    cn2.changeImaginary();
    cn1.output();
    cn2.output();
}