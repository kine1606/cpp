#pragma once
class Point
{
public:
    Point();
    Point(double x, double y);
    void input();
    void output();
    void updatePoint();
    double get_x();
    double get_y();
    void LinearMove();
    double calcDistance(const Point& );
    ~Point();
private:
    double m_x;
    double m_y;
};