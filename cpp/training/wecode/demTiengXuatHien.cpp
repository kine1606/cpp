#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemTieng(char s1[]);
int myStrcmp(const char *s1, const char *s2);
int myStrlen(const char *s1);
char *myStrcpy(char *s1, const char *s2);
char *myMemmove(char *des, const char *source, int num);
char * myStrstr (char * str1, const char * str2 );
// mySubstr: Tach chuoi ss ra khoi chuoi s (lay count ky tu bat dau tu vi thi b)
void mySubstr(char s[], int b, int count, char ss[]);
char * myStrcat ( char * destination, const char * source );

int main() {
	char s[MAX];
	cin.getline(s, MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}
void mySubstr(char s[], int b, int count, char ss[])
{
    int index(0);
    for (size_t i = b; i < count; i++)
    {
        ss[index++]=s[i];
    }
}
int myStrlen(char *s)
{
	int count(0);
	while (s[count++]!= '\0'){}
	return count;
}
void DemTieng(char s[])
{
    int length = myStrlen(s);
    int pivot=0, count(0);
    for (size_t i = 0; i <length; i++)
    {
        char sCopy[100];
        count++;
        if(s[i]==' ')
        {
            mySubstr(s,pivot,count,sCopy);
            int lengthStringCopy = count;
            pivot=i+1;
            int index(0), bienCout(0);
            int check(0);
            for (size_t j = pivot; j < length; j++)
            {
                if(s[j]==' ')
                {
                    check=0;
                    continue;
                }
                if(s[j]==sCopy[index])
                {
                    index++;
                    check++;
                }
                if(check==lengthStringCopy)
                {
                    bienCout++;
                }
            }
            std::cout << sCopy << ": " << bienCout << '\n';
        }
    }
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
