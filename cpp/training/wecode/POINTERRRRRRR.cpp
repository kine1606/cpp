#include <iostream>
struct ptr
{
    int x;
    int y;
};
void nhapInt(int *&m)
{
    m=new int;
    std::cin >> *m;
}
int main()
{ 
    int *n; // nhap gia tri cho *n ?
    n = new int ;
    std::cin >> *n;
    std::cout<< "n=" << *n <<'\n';
    int *m;
    nhapInt(m);
    std::cout<< "m=" << *m <<'\n';
}