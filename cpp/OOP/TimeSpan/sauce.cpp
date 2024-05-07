#include "CTimeSpan.h"
#include "CTime.h"
#include <iostream>
int main()
{
    CTimeSpan t1;
    CTimeSpan t2(1,2,5);
    std::cin >> t1 ;
    std::cout<< t1  <<'\n';
    std::cout<< t2 <<'\n';
    std::cout<< "t1+t2= ";
    std::cout<< t1+t2 <<'\n';
    std::cout<< "t1-t2= ";
    std::cout<< t1-t2 <<'\n';

    std::cout<< "> : " ;
    if(t1 > t2) std::cout<< 1 <<'\n';
    else std::cout<< 0 <<'\n';

    std::cout<< ">= : " ;
    if(t1 >= t2) std::cout<< 1 <<'\n';
    else std::cout<< 0 <<'\n';

     std::cout<< "< : " ;
    if(t1 < t2) std::cout<< 1 <<'\n';
    else std::cout<< 0 <<'\n';

    std::cout<< "<= : " ;
    if(t1 <= t2) std::cout<< 1 <<'\n';
    else std::cout<< 0 <<'\n';

    std::cout<< "!= : " ;
    if(t1 != t2) std::cout<< 1 <<'\n';
    else std::cout<< 0 <<'\n';

    std::cout<< "== : " ;
    if(t1 == t2) std::cout<< 1 <<'\n';
    else std::cout<< 0 <<'\n';
    std::cout<< "================================" <<'\n';
    CT c1;
    std::cin>> c1 ;
    std::cout<< "c1 = " << c1 <<'\n';
    std::cout<< "c1++ = " << c1++ <<'\n';
    std::cout<< "c1-- = " << c1-- <<'\n';
    std::cout<< "++c1 = " << ++c1 <<'\n';
    std::cout<< "--c1 = " << --c1 <<'\n';
}