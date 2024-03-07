#include <iostream>
#include "Point.h"

int main()
{
    Point p1;
    p1.input();
    Point p2(16, 6);
    double distance = p1.calc(p2);
    p1.output(p2, distance);
}