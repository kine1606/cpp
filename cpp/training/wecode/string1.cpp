
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

bool check(char name[MAX], int length)
{
    for (int i = 0; i < length ; i++)
    {
        if((int(name[i]))>=48 && (int(name[i]))<=57  || int(name[i])<=122 && int(name[i])>=97)
        return false;
    }
    return true;
}
int main()
{
    char name[MAX];
    cin.getline(name,'\n'); 
    int length= sizeof(name)/sizeof(name[1]);
    if(check(name,length))
    {
    std::cout << name;
    }
    else std::cout << "CHUOI KHONG HOP LE.";
}