
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void ChuanHoa(char s[]);

int main() {
    char s[MAX];
    cin.getline(s, MAX);    //Nhap chuoi s
    ChuanHoa(s);
    cout << s << endl;
    return 0;
}
int strlenFunc(char s[])
{
    int count(0);
    while (s[count++]!= '\0'){}
    return count;
}
int ghepChuoi(char s[], int gap, int &length, int phanDu)
{
    for (size_t i = gap; i <length; i++)
    {
        s[i]=s[i+phanDu];
    }
    s[length-phanDu]='\0';
    return strlenFunc(s);
}
//  NguyeN   Trung KiEn
void ChuanHoa(char s[])
{
    int length = strlenFunc(s);
    for (size_t i = 0; i < length; i++)
    {
        if(s[0]==' ')
        {
              for (int j = i + 1; j < length; j++) {
                if (s[j] == ' ')
                {
                    continue;
                }
                else if (isalpha(s[j]))
                {
                    length = ghepChuoi(s, i, length, j-i);
                    break;
                }
        }
        if(s[i]== ' ')
        {
              for (int j = i + 1; j < length; j++) {
                if (s[j] == ' ')
                {
                    continue;
                }
                else if (isalpha(s[j]))
                {
                    length = ghepChuoi(s, i, length, j-i);
                    break;
                }
        }
        }
        }
        s[i]=tolower(s[i]);
    }
    for (size_t i = 0; i <length; i++)
    {
        s[0]=toupper(s[0]);
        if(s[i]==' ') 
        {
            s[i+1]= toupper(s[i+1]);
        }
    }
}