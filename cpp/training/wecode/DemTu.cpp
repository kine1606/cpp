#include <iostream>
#define MAXN 200
int DemTuTrongChuoi (char s[])
{
    int count(0);
    int sub(0);
    for (size_t i = 0; s[i]!='\0'; i++)
    {
        if(s[i]!=' ')
        {
            if(s[i+1]=='\0') 
            {
                count++;
                continue;
            }
            if(s[i+1]== ' ')
            count++;
        }
    }
    return count;
}
int main() {
    char s[MAXN];
    std::cin.getline(s, MAXN);
    std::cout << DemTuTrongChuoi(s);
    return 0;
}
