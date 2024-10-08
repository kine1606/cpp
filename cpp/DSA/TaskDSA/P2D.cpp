// #include <iostream>
// #include <vector>
// using namespace std;
// #include <algorithm>
// #include<vector>
// struct Diem
// {
//     int x;
//     int y;
//     void Input(int x, int y){
//         this->x=x;
//         this->y=y;
//     }
//     int Getx(){
//         return this->x;
//     }
//     int Gety(){
//         return this->y;
//     }
//     bool operator<(Diem other){
//         if(x==other.x)
//             return y>other.y;
//         return x<other.x;
//     }
// };

// int main()
// {
//     int n;
//     vector<Diem> arr;
//     std::cin>> n ;
//     int a, b;
//     Diem xxx;
//     for (size_t i = 0; i < n; i++)
//     {
//         cin> >a>> b;
//         xxx.Input(a,b);
//         arr.push_back(xxx);
//     }
//     for (size_t i = 0; i < arr.size(); i++)
//     {
//         for (size_t j = i+1; j < arr.size(); j++)
//         {
//         }
        
//     }
    
//     sort(arr.begin(),arr.end());
//     for (Diem i:arr)
//     {
//         cout<<i.Getx()<<" "<<i.Gety();
//         cout<<'\n';
//     }
    
// }
#include <iostream>
#include <vector>
#include <algorithm>
struct Diem
{
    int x;
    int y;
    Diem(int _x, int _y):x(_x),y(_y){}
    bool operator < (Diem other)
    {
        if(x==other.x)
            return y < other.y;
        return x > other.x;
    }
};

int main()
{
    int n;
    std::vector<Diem> arr;
    std::cin >> n ;
    int a, b;
    for (size_t i = 0; i < n; i++)
    {
        std::cin>> a>> b;
        arr.push_back(Diem(a, b));
    }
    // for (size_t i = 0; i < arr.size(); i++)
    // {
    //     int index = i;
    //     for (size_t j = i+1; j < arr.size(); j++)
    //     {
    //         if(arr[index] < arr[j])
    //             index = j;
    //     }
    //     std::swap(arr[index], arr[i]);
    // }
    std::sort(arr.begin(), arr.end());
    for (size_t i = n - 1; i >= 0; i--)
    {
        std::cout << arr[i].x << " " << arr[i].y << '\n';
    }
    
    
}