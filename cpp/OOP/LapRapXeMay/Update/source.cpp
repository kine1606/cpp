#include "XeMay.h"
#include "KhungXe.h"
#include "DongCo.h"
#include "BanhXe.h"
#include <string>
#include <iostream>
int main()
{
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    // XeMay xm;
    // xm.input();
    // xm.output();
    XeMay* ptr = new XeMay[2];
    ptr[0].input();
    ptr[1].input();
    ptr[0].output();
    ptr[1].output();
}