#include <iostream>

class Animal
{
public:
    virtual void speak(){
        std::cout<< "Animal speak" <<'\n';
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        std::cout << "Dog speak" << '\n';
    }
};
class Cat : public Animal
{
public:
    void speak(){
        std::cout << "Cat speak" << '\n';
    }
};

int main()
{
    Animal* ptr;
    Dog dog;
    ptr = &dog;
    ptr->speak();
}
