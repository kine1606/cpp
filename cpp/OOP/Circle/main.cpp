#include "Circle.h"
int main()
{
    Circle Circ;
    Circ.input();
    double C=Circ.circumference();
    double S = Circ.Square();
    Circ.output(C, S);
}