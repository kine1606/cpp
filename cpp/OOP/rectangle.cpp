#include <iostream>
#include <vector>
class rectangle
{
    private:
        double length;
        double width;
    public:
        void input()
        {
            std::cin>> length >> width ;
        }
        void output()
        {
            std::cout<< "length=" << length << " " << "width=" << width <<'\n';
        }
        double Circumference()
        {
            return (length + width) * 2;
        }
        double Area()
        {
            return length * width;
        }
        double Area(int length, int width)
        {
            return length * width;
        }
        ~rectangle()
        {
            std::cout<< "no more rectangle!!!" ;
        }
};
int main()
{
    rectangle rtg1;
    rectangle rtg2;
    rtg1.input();
    rtg1.output();
    std::cout<< rtg1.Circumference() <<'\n';
    std::cout<< rtg1.Area() <<'\n';
    std::cout<< rtg2.Area(6, 7) <<'\n';

}