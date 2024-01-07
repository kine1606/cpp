#include <iostream>
#include <string>
using namespace std;
#define MAX 300
bool check(std::string name, int length)
{
    for (int i = 0; i < length ; i++)
    {
        if(name[i]==' ') continue;
        if((int(name[i]))>=48 && (int(name[i]))<=57)  
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char name[MAX];
    std::cin >> name;
    std::cin.ignore(' ');
    int length= sizeof(name);
    if(check(name,length))
    {
    std::cout << name;
    }
    else std::cout << "CHUOI KHONG HOP LE.";
}
