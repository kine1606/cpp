/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/


#include <iostream>
#include <string>
using namespace std;
#define MAX 255
int myStrlen(const  char *s);
char * myStrcat( char * destination, const char * source);
int main() {
	char s1[MAX], s2[MAX];
	cin.getline(s1, MAX);
	std::cout << "chuoi s1 la : " << s1 << '\n';
	cin.getline(s2,MAX);
	std::cout << "chuoi s2 la : " << s2 << '\n';
	char* kq = myStrcat(s1, s2);
	std::cout<< kq;
}

char* myStrcat(char *s1,const char *s2)
{
	int count1(0), count2(0);
	bool tong = true;
	while(s1[count1]!='\0')
	{
		count1++;
	}
	while(s2[count2]!='\0')
	{
		count2++;
		if (count2>254)
		{
			tong=false;
		}
	}
	if(tong)
	{
		int countt(0);
		for (size_t i = count1; i <count1+count2; i++)
		{
			s1[i]=s2[countt++];
		}                                                      
		    return s1;
	}
    else
		{
           char *s5;
		   s5[0]='K';
			s5[1]='h';
			s5[2]='o';
			s5[3]='n';
			s5[4]='g';
			s5[5]=' ';
			s5[6]='n';
			s5[7]='o';
			s5[8]='i';
			s5[9]=' ';
			s5[10]='d';
			s5[11]='u';
			s5[12]='o';
			s5[13]='c';
			s5[14]='.';
			s5[15]=' ';
			s5[16]='K';
			s5[17]='h';
			s5[18]='o';
			s5[19]='n';
			s5[20]='g';
			s5[21]=' ';
			s5[22]='d';
			s5[23]='u';
			s5[24]=' ';
			s5[25]='b';
			s5[26]='o';
			s5[27]=' ';
			s5[28]='n';
			s5[29]='h';
			s5[30]='o';
			s5[31]='\0';
	           return s5;
		}
}
