#include "1DArr.h"
#include <iostream>
int main()
{
    Array1D arr;
    arr.random_generate();
    arr.output();
    if(arr.isDecaying())
        std::cout<< "Mang giam dan " <<'\n';
    else 
        std::cout<< "Mang khong giam dan " <<'\n';
    int smallest_odd = arr.Smallest_odd();
    std::cout<< "So le nho nhat:" << smallest_odd << '\n';
    int appear =  arr.Times_appear();
    std::cout<< "So lan xuat hien cua phan tu: " << appear <<'\n';
    arr.Sorting();
    std::cout<< "Sau khi sap xep" <<'\n';
    arr.output();
}