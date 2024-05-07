#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300
void XoaKhoangTrangDu_TruocDauCham(char s[])
{
    int count(0);
    while (s[count]!='\0')
    {
        count++;
    }
    for (size_t i = 1; s[i]!='\0'; i++)
    {
        if(s[i] == ' ' && s[i+1]== '.')
        {
            count--;
            for (size_t j = i; j < count; j++)
            {
                s[j]=s[j+1];
            }
        }
    }
    s[count]='\0';
}
int main() {
	char s[MAX];
	cin.getline(s, MAX);
	cout << s << endl;
	char s1[MAX];
	strcpy(s1, s);
	XoaKhoangTrangDu_TruocDauCham(s1);
	cout << s1 << endl;
	return 0;
}