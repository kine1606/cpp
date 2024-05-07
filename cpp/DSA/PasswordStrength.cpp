#include <iostream>
#include <string>
int main()
{
    std::string password;
    std::getline(std::cin, password);
    int numberCase(0), lowerCase(0), upperCase(0), specialCase(0);
    if(password.size() < 8 )
    {
        std::cout<< "KhongHopLe" <<'\n';
        return 0;
    }
    for (size_t i = 0; password[i]!= '\0'; i++)
    {   
        int x = int(password[i]);
        if(x >= 48 && x <= 57)
            numberCase++;
        else if(x>= 65 && x <=90)
            upperCase++;
        else if(x>=97 && x<=122)
            lowerCase++;
        else if(x==34 || x==39 || x==47 || x== 92 || x==46 || x==32)
            {
                std::cout<< "KhongHopLe" <<'\n';
                return 0;
            }
        else 
            specialCase++;
    }


    int BaseScore(40), Bonus_Excess(3), Bonus_Upper(4), Bonus_Number(5), Bonus_Symbols(5);
    int Bonus_combo(0), Bonus_FlatLower(0), Bonus_FlatNumber(0); 
    if(numberCase == password.size())
        Bonus_FlatNumber = -35;
    else if(lowerCase == password.size())
        Bonus_FlatLower = -15;
    else if(numberCase > 0 && upperCase >0 && specialCase==0)
        Bonus_combo = 15;
    else if(numberCase >0 && specialCase >0 && upperCase==0)
        Bonus_combo = 15;
    else if(specialCase>0 && upperCase >0 && numberCase ==0)
        Bonus_combo = 15;
    else if(numberCase>0 && upperCase >0 && specialCase >0)
        Bonus_combo = 25;

    // std::cout<< "numberCase=" << numberCase <<'\n';
    // std::cout<< "lowerCase=" << lowerCase <<'\n';
    // std::cout<< "upperCase=" << upperCase <<'\n';
    // std::cout<< "specialCase=" << specialCase <<'\n';
    // std::cout<< "password.size()=" << password.size() <<'\n';
    // std::cout<< "Bonus_combo=" << Bonus_combo <<'\n';
    // std::cout<< "Bonus_FlatLower=" << Bonus_FlatLower <<'\n';
    // std::cout<< "Bonus_FlatNumber=" << Bonus_FlatNumber <<'\n';

    int score = BaseScore + ((password.size()-8) * Bonus_Excess) +
    (upperCase * Bonus_Upper) + (numberCase * Bonus_Number) + 
    (specialCase * Bonus_Symbols) + Bonus_combo + Bonus_FlatLower + Bonus_FlatNumber;

    if(score<50)
    {
        std::cout<< "Yeu" <<'\n';
    }
    else if(score >=50 && score <75)
    {
        std::cout << "Vua" << '\n';
    }
    else if(score >=75 && score < 100)
    {
        std::cout<< "Manh" <<'\n';
    }
    else std::cout<< "RatManh" <<'\n';
}