#include <iostream>
#include <vector>
#include <algorithm>
struct ToaDo
{
    int x;
    int y;
    int uoc;
    bool operator>(const ToaDo& xx)
    {
        if(xx.uoc == this->uoc) 
        {
            if(xx.x == this->x) return xx.y < this->y;
            return xx.x<this->x;
        }
        return xx.uoc > this->uoc;
    }    
    bool operator<(const ToaDo& xx)
    {
        if(xx.uoc == this->uoc) 
        {
            if(xx.x == this->x) return xx.y < this->y;
            return xx.x<this->x;
        }
        return xx.uoc < this->uoc;
    }
};
int UocSo(long long x)
{
    int count(0);
    for (size_t i = 1; i*i <= x; i++)
    {
        if(x%i == 0) count++;
        x/=i;
    }
    return count;
}
int main()
{
    int n;
    std::cin>> n ;
    std::vector<std::vector<int>> MaTranBatQuai;
    std::vector <ToaDo> TichTamSo;
    for (size_t i = 0; i < n; i++)
    {
        std::vector<int> temp;
        for (size_t j = 0; j < n; j++)
        {
            int x;
            std::cin>> x ;
            temp.push_back(x);
        }
        MaTranBatQuai.push_back(temp);
    }
    for (size_t i = 1; i < n-1; i++)
    {
        for (size_t j = 1 ; j < n-1; j++)
        {
            long long Tich(1);
            Tich *= MaTranBatQuai[i-1][j-1];
            Tich *= MaTranBatQuai[i-1][j];
            Tich *= MaTranBatQuai[i-1][j+1];

            Tich *= MaTranBatQuai[i][j-1];
            Tich *= MaTranBatQuai[i][j+1];

            Tich *= MaTranBatQuai[i+1][j-1];
            Tich *= MaTranBatQuai[i+1][j];
            Tich *= MaTranBatQuai[i+1][j+1];
            ToaDo temp;
            temp.x = i;
            temp.y = j;
            temp.uoc = UocSo(Tich);
            TichTamSo.push_back(temp);
        }
    }
    // for (auto &&i : TichTamSo)
    // {
    //     std::cout<< "x=" << i.x <<'\n';
    //     std::cout<< "y=" << i.y <<'\n';
    //     std::cout<< "uoc=" << i.uoc <<'\n';
    //     std::cout <<'\n';
    // }
    std::sort(TichTamSo.begin(), TichTamSo.end());
    // for (auto &&i : TichTamSo)
    // {
    //     std::cout<< "x=" << i.x <<'\n';
    //     std::cout<< "y=" << i.y <<'\n';
    //     std::cout<< "uoc=" << i.uoc <<'\n';
    //     std::cout <<'\n';
    // }
    std::cout<< TichTamSo.front().x +1<< " " << TichTamSo.front().y +1;
}