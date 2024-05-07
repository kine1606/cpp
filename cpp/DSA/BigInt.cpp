#include <string>
#include <iostream>
#include <stack>
int main()
{
    std::string num1;
    std::string num2;
    std::stack<char> sum;
    getline(std::cin, num1);
    getline(std::cin, num2);
    // std::cout << num1 << '\n' << num2;
    int i(num1.size()-1);
    int j(num2.size()-1);
    int save = 0;
    while (i != -1  && j != -1)
    {
        int temp1 = num1[i] -48;
        int temp2 = num2[j] -48;
        int temp = temp1 + temp2;   
        if(temp >= 10)
        {
            temp = 10 - temp;
            save = 1;
            sum.push(char(temp +'0'));
        } 
        else 
        {
            temp+= save;
            if(temp >= 10)
            {
                temp = 10 - temp;
                save = 1;
                sum.push(char(temp +'0'));
                i--;
                j--;
                continue;
            } 
            sum.push(char(temp+'0'));
            save =0;
        }
        i--;
        j--;
    }
    while(i!= -1)
    {      
        if(save == 0) 
        {
            sum.push(char(num1[i] + '0'));
            i--;
        } 
        else
        {
            sum.push(char(((num1[i] -48) + save) + '0'));
            i--;
            save =0;
        }
    }
    while(j!= -1)
    {
        if(save == 0) 
        {
            sum.push(char(num2[j] + '0'));
            j--;
        } 
        else
        {
            sum.push(char(((num2[j]-48) + save) + '0'));
            j--;
            save =0;
        }

    }
    if(save)
    {
        sum.push(char(save + '0'));
    }
    while(!sum.empty())
    {
        std::cout<< sum.top(); 
        sum.pop();

    }
}