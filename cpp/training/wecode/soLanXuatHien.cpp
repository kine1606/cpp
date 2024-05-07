
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);

//So sanh 2 chuoi s1 va s2
//s1 = s2: 0
//s1 < s2: -1
//s1 > s2: 1
int myStrcmp(const char *s1, const char *s2);

int myStrlen(const char *s);

int main() {
    char s[MAX];
    cin.getline(s, MAX);
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else
        DemKyTu(s);

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
void DemKyTu (char s[])
{
    int noChars(0);
    while (s[noChars++]!='\0'){}

    bool printed = true;
    for (size_t i = 0; i < noChars-1; i++)
    {
        int find = int(s[i]);
        int count(0);
        for (size_t j = i; j < noChars; j++)
        {
            if(int(s[j])==find)
            {
                count++;
            }
        }
        bool check = true;
        for (size_t j = 0; j < i; j++)
        {
            if(s[j]==s[i]) check=false;
        }
        if(check)
        {
            std::cout << s[i] << ": " << count << '\n';
        }
    }
}
