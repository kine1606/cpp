#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void XoaKhoangTrangDu_TruocDauCham(char *s);
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
void DoiString(char *s, int pivot, int &dem, int& count)
{
    for (size_t i = pivot; i <count; i++)
    {
        s[i]=s[i+dem];
    }
    count-=dem;
}

void XoaKhoangTrangDu_TruocDauCham(char *str)
{
    int noChars {0};
    while (str[noChars++]!= '\0'){}
    for (size_t i = 0; str[i] != '\0'; i++)
    {
    int dem(0);
        int pivot=i;
        while (str[i] == ' ')    
        {
            dem++;
            if(str[++i] =='.')
            {
                DoiString(str,pivot,dem,noChars);
            }
        }
        dem=0;
    }
    str[noChars]='\0';
}



// . .



    
    // int spaceKeeperIndex = 0;
    // int dotIndex = 0;
    // bool isSpaceFound = false;
    // bool isDotFound = false;
    // for (size_t i = 0; i < noChars;)
    // {
    //     if (!isSpaceFound)
    //     {
    //         if (str[i] == ' ')
    //         {
    //             spaceKeeperIndex = i;
    //             isSpaceFound = true;
    //         }
    //     }
    //     else
    //     {
    //         if (str[i] == '.')
    //         {
    //             dotIndex = i;
    //             isDotFound = true;
    //         }
    //         else if (str[i] = ' ')
    //         {
    //             // keep going when hitting a space
    //         }
    //         else
    //         {
    //             // something else not dot or space
    //             // reset
    //             isSpaceFound = false;
    //         }
    //     }

    //     if(isSpaceFound && isDotFound)
    //     {
    //         moveString(str, spaceKeeperIndex, dotIndex, noChars);
    //         i-=(dotIndex - spaceKeeperIndex);
    //         std::cout<<"string: "<<str<<"\n";
    //         isSpaceFound = false;
    //         isDotFound = false;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }
    
