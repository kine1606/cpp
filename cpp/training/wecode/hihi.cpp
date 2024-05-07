/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/


//###INSERT CODE HERE -
#include <iostream>
#define MAXN 1000
void Input(int &n)
{
std::cin>> n;
}
void NhapMang(char a[], int n)
{
for (size_t i = 0; i <n; i++)
{
std::cin>>a[i];
}
}
void XuatMang(char a[], int n)
{
    for (size_t i = 0; i <n; i++)
    {
        if (int(a[i])<=90 && int(a[i])>=65)
        {
            std::cout << char(int((a[i])+32)) << '\t';
        }
        else if (int(a[i])<=122 && int(a[i])>=97)
        {
            std::cout << char(int((a[i])-32))<< '\t';
        }
        else std::cout<< a[i]<< '\t';
        
    }
    
}
int main() {
    char a[MAXN];
    int n;
    Input(n); // Yêu cầu: n được nhập trong hàm Input!
    NhapMang(a, n);
    XuatMang(a, n);
    return 0;
}
