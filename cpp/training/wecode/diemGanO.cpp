/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <iostream>
#include <cmath>
#define MAXN 100
struct Point
{
    int x;
    int y;
};
void Nhap (Point points[100], int  &n)
{
    std::cin>> n ;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> points[i].x  >> points[i].y;
    }
}
double distanceToOrigin(Point p) 
{
    return std::sqrt(abs(p.x * p.x + p.y * p.y));
}
Point DiemGanGocToaDoNhat(Point points[100], int n)
{
    double min = distanceToOrigin(points[0]);
    Point minPoint = points[0];
    for (size_t i = 1; i <n; i++)
    {
        double tempDistance =distanceToOrigin(points[i]);
        if(min>tempDistance)
        {
            minPoint = points[i];
            min=distanceToOrigin(points[i]);
        }
    }

    return minPoint;
} 
void Xuat(Point point)
{
    std::cout << "(" << point.x << ", " << point.y << ")";
}
int main() {
    Point points[MAXN];
    int n;
    Nhap(points, n);
    std::cout << "Diem gan goc toa do nhat la: ";
    Xuat(DiemGanGocToaDoNhat(points, n));
    return 0;
}
