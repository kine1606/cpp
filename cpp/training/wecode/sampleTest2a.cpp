#include <iostream>
int gocPhanTu(int n)
{
    if(n>360)
    {
        while (n>360)
        {
            n-=360;
        }
    }
    if(n<-360)
    {
        while (n<-360)
        {
            n+=360;
        }
    }
    if(0<=n && n<90 || -270<=n && n<=-360) return 1;
    else if((n>=90 && n<180 ) || n<=-180 && n>-270) return 2;
    else if((n>=180 && n<270 ) || (n<=-90 && n>-180)) return 3;
    else if(n>=270 && n<360 || -90<n && n<0) return 4;
    return 1; 
}
int main()
{
    int n;
    std::cin>> n ;
    std::cout << gocPhanTu(n);
}