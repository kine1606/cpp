#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A : default" << endl;
    }
    A(int a)
    {
        cout <<"A : parameter"<< endl;
    }
    ~A()
    {
        std::cout<< "Huy A !!" << '\n';
    }
};

class B : public A
{
public:
    B(int a)
    {
        cout <<"B" << endl;
    }
    ~B()
    {
        std::cout<< "HUY B" <<'\n';
    }
};
int main()
{
    B test(1);
}