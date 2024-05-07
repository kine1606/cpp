#include "Cattle.h"
#include "Cow.h"
#include "Sheep.h"
#include "Goat.h"
#include <iostream>
#include <ctime>

Cattle::Cattle() = default;
Cow::Cow()
{
    srand(unsigned(time(NULL)));
    m_child = rand() % 30 + 10 ;
    m_milk = rand()%20 +1;
}
Goat::Goat()
{
    srand(unsigned(time(NULL)));
    m_child = rand() % 30 + 20;
    m_milk = rand()%10 +1;
}
Sheep::Sheep()
{
    srand(unsigned(time(NULL)));

    m_child = rand() % 30 + 15;
    m_milk = rand()%5 +1;   
}

Cattle::Cattle(int child, int milk):m_child(child), m_milk(milk){}
Cow::Cow(int child, int milk):Cattle(child, milk){}
Goat::Goat(int child, int milk):Cattle(child, milk){}
Sheep::Sheep(int child, int milk):Cattle(child, milk){}

void Cow::speak()
{
    std::cout<< "Cow speak: " ;
    std::cout<< "Moo moo" <<'\n';
}
void Sheep::speak()
{
    std::cout<< "Sheep speak: ";
    std::cout << "Baa baa" << '\n';
}
void Goat::speak()
{
    std::cout<< "Goat speak: ";
    std::cout << "Maa maa" << '\n';
}

Cattle::~Cattle(){std::cout<< "Delete Cattle" <<'\n';}
Cow::~Cow(){std::cout<< "Delete Cow" <<'\n';}
Sheep::~Sheep(){std::cout<< "Delete Sheep" <<'\n';}
Goat::~Goat(){std::cout<< "Delete Goat" <<'\n';}

int Cattle::getChild(){return m_child;}
int Cattle::getMilk(){return m_milk;}