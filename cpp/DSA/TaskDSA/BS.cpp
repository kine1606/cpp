#include <iostream>
#include <vector>
class Point
{
public:
    int m_x;
    int index;
    bool operator<(const Point& x)
    {
        if(m_x == x.m_x)
            return index < x.index; 
        return m_x < x.m_x;
    }
    bool operator>(const Point& x)
    {
        if(m_x == x.m_x)
            return index > x.index;

        return m_x > x.m_x;
    }
};
int binar(const std::vector<Point>& arr, int x, int Qx)
{
    int left = 0;
    int right = arr.size()-1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(x < arr[mid].m_x) right = mid-1;
        else if(x > arr[mid].m_x) left = mid+1;
        else 
        {
            if(Qx == 1)
            {
                while(true)
                {
                    if(arr[mid].m_x == arr[mid-1].m_x)
                        mid--; 
                    else 
                    {
                        return arr[mid].index + 1;
                    }
                }
            }
            else if(Qx ==2)
            {
                while(true)
                {
                    if(arr[mid].m_x == arr[mid+1].m_x)
                        mid++; 
                    else 
                    {
                        return arr[mid].index +1;
                    }
                }
            } 
            return arr[mid].index +1;
        }
    }
    return -1;
}
void quickx(std::vector<Point>& arr, int left, int right)
{
    if(left>=right) return;
    int i= left;
    int j= right;
    Point pivot = arr[(left+right)/2];
    while(i<=j)
    {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if(i<=j)
        {
            std::swap(arr[j], arr[i]);
            i++;
            j--;
        }        
    }
    quickx(arr,left, j);
    quickx(arr,i, right);
}
int main()
{
    int n, m;
    std::cin>> n >> m ;
    std::vector<Point> arr;
    for (size_t i = 0; i < n; i++)
    {
        Point x;
        int hihi;
        std::cin>> hihi ;
        x.m_x = hihi;
        x.index = i;
        arr.push_back(x);
    }
    quickx(arr, 0, arr.size()-1);
    std::vector<int> chamhoi;
    while(m--)
    {
        // type
        std::string s;
        std::cin>> s;
        // x type & y value
        int Qx, Qy;
        std::cin>> Qx >> Qy;

        chamhoi.push_back(binar(arr, Qy, Qx));        
    }
    for (auto i : chamhoi)
    {
        std::cout<< i <<'\n';
    }

}