#include <iostream>
#include <cstring>
#include <string>
#define MAX 1000
int main()
{
    char str[MAX];
    std::cin.getline(str, 1000);
    int max(0);
    char kiTu;
    int length= strlen(str);
    std::cout << length << "\n";
    for (size_t i = 0; i < length; i++)
    {
        int count(0);
        for (size_t j = i+1; j <length; j++)
        {
            if(int(str[j]) == int (str[i]))
            {
            count++;
            }
        }
        if (max<count)
        {
            max=count;
            kiTu=str[i];
        }
    }
    std::cout << "xuat hien nhieu nhat la " << kiTu << '\n'
            << "Xuat hien " << max + 1 <<" lan"; 
}