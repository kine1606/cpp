#pragma once
class Point
{
private:
    double m_x;
    double m_y;
public:
    Point();
    Point(double, double);
    void input();
    void output() const;

    void set_x(double);
    void set_y(double);
    void set_point(double, double);

    double get_x() const;
    double get_y() const;
    Point get_point() const;

    void zoom(double);
    void move(double, double);
    ~Point();
};