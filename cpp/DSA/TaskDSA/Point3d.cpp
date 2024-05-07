/* code */
#include <iostream>
#include <vector>
#include <algorithm>
#include<vector>
using namespace std;
class Diem
{
public:
    int x;
    int y;
    int z;
    void Input(int x, int y, int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    int Getx(){
        return this->x;
    }
    int Gety(){
        return this->y;
    }
    int Getz(){
        return this->z;
    }
    bool operator<(Diem other)
    {
        if(x==other.x)
        {
            if(y==other.y)
            {
                return z<other.z;
            }    
            return y>other.y;
        }
        return x<other.x;
    }
    bool operator>(Diem other)
    {
        if(x==other.x)
        {
            if(y==other.y)
            {
                return z>other.z;
            }
            return y<other.y;
        }
        return x>other.x;
    }
};
void Quick(std::vector <Diem>& arr, int left , int right)
{
    if(left >= right) return;
    int mid= (left + right)/2;
    Diem pivot = arr[mid];
    int i = left;
    int j = right;
    while (i<=j)
    {
        while (arr[i] < pivot)  i++;
        while (arr[j] > pivot)  j--;
        if(i<=j)
        {
            std::swap(arr[j], arr[i]);
            i++;
            j--;
        }
    }  
    Quick(arr, left, j);
    Quick(arr, i, right);
}
int main()
{
    int n;
    vector<Diem> arr;
    std::cin>> n ;
    int a, b, c;
    Diem xxx;
    for (size_t i = 0; i < n; i++)
    {
        cin>>a>>b>>c;
        xxx.Input(a,b,c);
        arr.push_back(xxx);
    }
    Quick(arr, 0, arr.size()-1);
    for (Diem i:arr)
    {
        cout<<i.Getx()<<" "<<i.Gety() << " " << i.Getz();
        cout<<'\n';
    }
    
}