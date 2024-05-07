#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
#include<vector>
class Diem
{
public:
    int x;
    int y;
    void Input(int x, int y){
        this->x=x;
        this->y=y;
    }
    int Getx(){
        return this->x;
    }
    int Gety(){
        return this->y;
    }
    bool operator<(Diem other){
        if(x==other.x)
            return y>other.y;
        return x<other.x;
    }
};

int main()
{
    int n;
    vector<Diem> arr;
    std::cin>> n ;
    // arr.lst = new Diem[arr.sz];
    int a,b;
    Diem xxx;
    for (size_t i = 0; i < n; i++)
    {
        cin>>a>>b;
        xxx.Input(a,b);
        arr.push_back(xxx);
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        for (size_t j = i+1; j < arr.size(); j++)
        {
        }
        
    }
    
    sort(arr.begin(),arr.end());
    for (Diem i:arr)
    {
        cout<<i.Getx()<<" "<<i.Gety();
        cout<<'\n';
    }
    
}