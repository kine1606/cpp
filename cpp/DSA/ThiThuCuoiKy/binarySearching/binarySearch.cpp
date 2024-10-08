#include <iostream>
#include <vector>
struct toaDo
{
    double m_x, m_y, m_z;
    toaDo(double x, double y, double z)
    {
        m_x = x; m_y = y; m_z = z;
    }
    bool operator>(const toaDo& rhsTD)
    {
        if(m_x == rhsTD.m_x) 
        {
            if(m_y == rhsTD.m_y)
            {
                return m_z > rhsTD.m_z;
            }
            else
            {
                return m_y > rhsTD.m_y;
            }
        }
        return m_x > rhsTD.m_x;
    }
    bool operator==(const toaDo& rhsTD)
    {
        return m_x == rhsTD.m_x && m_y == rhsTD.m_y && m_z == rhsTD.m_z;
    }
};
void binarySearching(std::vector<toaDo> myVector, toaDo myToaDo, std::vector<int>& vectorCheck)
{
    int count(0);
    int left = 0;
    int right = myVector.size() -1;
    while(left <= right)
    {
        int mid = (left+right)/2;
        if(myVector[mid] == myToaDo) 
        {
            vectorCheck.push_back(count);
            return;
        }
        else if(myVector[mid] > myToaDo) right = mid - 1;
        else if(myToaDo > myVector[mid]) left = mid + 1;
        count++;
    }
    vectorCheck.push_back(-1);
}
int main()
{

    std::vector <toaDo> myVector;
    int n;
    std::cin>> n ;
    for (size_t i = 0; i < n; i++)
    {
        double a, b, c;
        std::cin>> a >> b >> c ;
        toaDo myToaDo(a, b, c);
        myVector.push_back(myToaDo);
    }
    std::vector<int> vectorCheck;
    int m;
    std::cin>> m ;
    for (size_t i = 0; i < m; i++)
    {
        double a, b, c;
        std::cin>> a >> b >> c ;
        toaDo myToaDo(a,b,c);
        binarySearching(myVector, myToaDo, vectorCheck);
    }
    for (auto &&i : vectorCheck)
    {
        if(i == -1)
        {
            std::cout<< "KHONG" <<'\n';
            continue;
        } 
        std::cout<< i +1 <<'\n';
    }
    
}