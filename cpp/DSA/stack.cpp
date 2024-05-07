#include <iostream>
#include <stack>
// Cho một dãy số gồm n số nguyên dương ai (n≤106,  ai≤109). 
// Với mỗi vị trí i, hãy in ra vị trí j gần nhất về phía bên trái thoả mãn ai < aj. 
// Nếu như không có phần tử nào thoả mãn in ra -1.
// 7
// 2 1 3 2 8 5 7   =>>>  -1 1 -1 3 -1 5 5
// 1 2 3 4 5 6 7
int main()
{ 
    int n;
    std::cin>> n ;
    long long *array = new long long [n];
    for (size_t i = 0; i <n; i++)
    {
        std::cin>> array[i];
    }
    std::cout<< "-1" << " ";
    std::stack <long long> storageNumber;
    storageNumber.push(array[0]);
    int index=1 ;
    for (size_t i = 1; i < n; i++)
    {
        if(!storageNumber.empty())
        {
            if(array[i] >= storageNumber.top())
            {
                storageNumber.pop();
                storageNumber.push(array[i]);
                index = i+1;
                std::cout<< "-1" << " ";
            }
            else 
            {
                std::cout<< index << " ";
            }               
        }
    }
}