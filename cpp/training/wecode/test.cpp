#include <iostream>
int main()
{
    int x=10;
    int *p;
    p=&x;
    std::cout<<"p=" << p <<'\n';
    std::cout<< "&p=" << &p <<'\n';
}