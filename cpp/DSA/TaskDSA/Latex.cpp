#include <iostream>
#include <stack>
#include <string>
bool match(const char& x, std::stack<char>& hihi)
{
    char y = hihi.top();
    if((x == ')' && y == '('))  
    {
        hihi.pop();
        return true;
    }
    else if((x == ']' && y == '['))
    {
        hihi.pop();
        return true;
    }
    else if((x == '}' && y == '{')) 
    {
        hihi.pop();
        return true;
    }
    return false;
}
int main()
{
    std::string fraction;
    std::stack <char> hihi;

    getline(std::cin, fraction);
    for (size_t i = 0; fraction[i]!='\0'; i++)
    {  
        if(fraction[i] == '(' || fraction[i] == '[' || fraction[i] =='{' )
        {
            hihi.push(fraction[i]); 
        }
        else if(fraction[i] == ')' || fraction[i] == '}'|| fraction[i] == ']') 
        {
            if(!hihi.empty())
            {
                if(!match(fraction[i], hihi))
                {
                    std::cout<< 0;
                    return 0;
                }
            }
            else 
            {
                std::cout<< 0;
                return 0;
            }
        }
    }
    if(!hihi.empty())
    {
        std::cout<< 0;
        return 0;
    }
    std::cout<< 1;
    return 0;
}