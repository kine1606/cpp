#pragma once
#include "Point.h"
class Triangle
{
private:
    Point A;
    Point B;
    Point C;
public:
    Triangle();
    void input();
    void output() const;
    void Move();
    void Zoom();
    ~Triangle();
    friend class Point;
};

