#include <iostream>
#include <string>
#define MAXN 1000
void NormalizeString(char* str) {
    bool newWord = true;
    while (*str) 
    {
        if (newWord && isalpha(*str)) 
        {
            *str = toupper(*str);
            newWord = false;
        } else 
        {
            *str = tolower(*str);
        }
        if (isspace(*str)) 
        {
            newWord = true;
        }
        str++;
    }
}

int main()
{
    char s[MAXN];
    std::cin.getline(s, MAXN);
    NormalizeString(s);
    std::cout << s;
    return 0;
}
