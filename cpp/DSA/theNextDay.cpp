#include <iostream>
int main()
{
    unsigned d, m, y;
    do
    {
        std::cout<< "Enter day: ";
        std::cin>> d >> m >> y ;
    } while ((d==0 || d>31) || (m>12) || ((m==2 && d>29)));
    
    std::cout<< "Today is: " << d << "/" << m << "/" << y <<'\n';
    if(m==12 && d==31)
    {
        std::cout<< "The next day is: " << 1 << "/" << 1 << "/" << ++y <<'\n';
        return 0;
    }
    else 
    {
        switch (m)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if(d<31)
                {
                    std::cout<< "The next day is: " << ++d << "/" << m << "/" << y <<'\n';
                    return 0;
                }
                else 
                {
                    std::cout<< "The next day is: " << 1 << "/" << ++m << "/" << y <<'\n';
                    return 0;
                }
            case 4:
            case 6:
            case 9:
            case 11:
                if(d<30)
                {
                    std::cout<< "The next day is: " << ++d << "/" << m << "/" << y <<'\n';
                    return 0;
                }
                else 
                {
                    std::cout<< "The next day is: " << 1 << "/" << ++m << "/" << y <<'\n';
                    return 0;
                }
            default:
                if((y%4 ==0 && d==28))
                    std::cout<< "The next day is: " << ++d << "/" << m << "/" << y <<'\n';
                else if(y%4==0 && d==29)
                    std::cout<< "The next day is: " << 1 << "/" << ++m << "/" << y <<'\n';
                else
                    std::cout<< "The next day is: " << ++d << "/" << m << "/" << y <<'\n';
        }
    }
}