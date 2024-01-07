#include <iostream>
#include <string.h>
#define MAX 200
using namespace std;
struct SOLON{
    int a[MAX];
    int n;
};
void input (SOLON &a)
{
    char s[MAX];
    cin>>s;
    a.n=strlen(s);
    for (int i=0;i<a.n;i++)
    {
        a.a[i]=(int)s[i]-48;
    }
}
SOLON Cong(SOLON a,SOLON b){
    SOLON s;
    int i = a.n , j = b.n ;
    int tam(0);
    s.n= (a.n > b.n ? a.n : b.n) ;
    int nho = 0, k = s.n;
    while (i>=0 && j>=0){
        tam = a.a[i--] + b.a[j--] + nho;
        s.a[k--] = tam % 10;
        nho = tam / 10;
    }
    while (i>=0)
    {
        tam= a.a[i--]+ nho;
        s.a[k--]= tam%10;
        nho= tam/10;
    }
    while (j >= 0){
        tam= b.a[j--]+ nho;
        s.a[k--]= tam%10;
        nho= tam/10;
    }
    if(nho> 0)
    {
        s.n++;
        for (int h=s.n-1;h>0;h--)
        {
            int temp=s.a[h];
            s.a[h]=s.a[h-1];
            s.a[h-1]=temp;
        }
        s.a[0]=1;
        s.a[1]=0;
    } 
    return s;
}
void output(SOLON so)
{
    for (size_t i = 0; i <so.n; i++)
    {
        std::cout<< so.a[i] ;
    }
    std::cout <<'\n';
}
int main() {
    SOLON a, b, S;
    input(a);
    input(b);
    S=Cong(a, b);
    output(a);
    output(b);
    output(S);
    return 0;
}
