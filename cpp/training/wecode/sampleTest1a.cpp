/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
for
do
while
goto
###End banned keyword*/

#include <iostream>
#define MAXN 400000
void NhapA(int a[MAXN], int i, int n)
{
    if(i==n) return;
    std::cin>> a[i];
    i++;
    return NhapA(a, i, n);
}
void NhapMang(int a[MAXN], int &n)
{
    std::cin>> n ;
    NhapA(a,0,n);
}
int Searching(int a[MAXN], int n, int i, int findingNumber)        
{
    if(n==0) return -1;
    if(a[i]==findingNumber) return 1;
    i++;
    if(i==n) return -1;
    return Searching(a,n,i,findingNumber);
}

int LinearSearch(int a[MAXN], int n, int findingNumber)
{
    return Searching(a,n,0,findingNumber);
}
int main() {
    int a[MAXN], n, x;

    std::cin >> x;

    NhapMang(a, n);

    int i= LinearSearch(a, n, x);

    if (i==-1) std::cout << "false";
    else std::cout << "true";
    return 0;
}
