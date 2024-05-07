#pragma once
#include "Point.h"
class Polygon
{
private:
    int m_sz;
    Point* List;
public:
    Polygon();
    Polygon(int);
    void input();
    void output() const;
    void Move();
    void Zoom();
    ~Polygon();
};

