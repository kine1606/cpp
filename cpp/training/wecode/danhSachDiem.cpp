#include <iostream>
struct Point{
    int x;
    int y;
};
void Nhap(Point *&points, int &n )
{
    std::cin>> n ;
    points=new Point[n];
    for (size_t i = 0; i <n; i++)
    {
        std::cin>> points[i].x >> points[i].y ;
    }
}
void Xuat(Point *points, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< "(" <<points[i].x <<", " << points[i].y << ")" <<'\n';
    }
}
int main() {
    Point *points;
    int n;
    Nhap(points, n);
    Xuat(points, n);
    return 0;
}
