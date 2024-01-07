
#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(const char *s1, const char *s2);

int main() {
	char s1[MAX], s2[MAX];
	cin.getline(s1, MAX);
	cin.getline(s2, MAX);
	int kt = myStrcmp(s1, s2);
    cout << strcmp(s1,s2) << '\n';
	cout << kt << endl;
	return 0;
}
int myStrcmp(const char *s1, const char *s2)
{
    int count1(0), count2(0);
    while (s1[count1++]!='\0'){}
    while (s2[count2++]!='\0'){}
    int length= (count1<count2)?count2:count1;
    for (size_t i = 0; i < length; i++)
    {
        if(int(s1[i])==int(s2[i])) 
        {
            continue;
        }
        else
        {
            if(int(s1[i]) > int(s2[i])) 
            {
                return 1;
            }
            if(int(s1[i]) < int(s2[i]))
            {
                return -1;
            }    
        }
    }
    return 0;
}
