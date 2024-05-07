#include <iostream>
class Animal
{
private:
    
public:
    Animal(){};
    ~Animal(){};
    virtual void Speak()
    {
        std::cout<< "Animal speak" <<'\n';
    }
};
class Cat : Animal
{

public:
    Cat(){};
    ~Cat(){};
    void Speak1()
    {
        std::cout<< "Cat speak" <<'\n';
    }
};

int main()
{
    Cat c;
    c.Speak();
}