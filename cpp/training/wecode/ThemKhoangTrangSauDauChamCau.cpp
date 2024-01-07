
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300
void ThemKhoangTrangDu_TruocDauCham(char *s);
int main() {
	char s[MAX];
	cin.getline(s, MAX);
	cout << s << endl;
	char s1[MAX];
	strcpy(s1, s);
	ThemKhoangTrangDu_TruocDauCham(s1);
	cout << s1 << endl;
	return 0;
}
void ThemKhoangTrangDu_TruocDauCham(char *s)
{
    int noChars(0);
    while(s[noChars++]!= '\0'){}
    for (size_t i = 0; s[i]!= '\0'; i++)
    {   
        if (s[i]=='.')
        {
            if(s[i+1]==' ')
            {
                if(s[i+2==' '])
                {
                    if(isalpha(s[i+3]))
                    {
                        continue;
                    }
                }
            }
        }
        
    }
    
}
