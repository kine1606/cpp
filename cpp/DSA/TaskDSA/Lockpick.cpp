// swap, delete
// % 3 == 0 
// 1%3 == 1
// 4%3 == 1
// 7%3 == 1

// 2%3 == 2
// 5%3 == 2 
// 8%3 == 2

// 5%3 == 2
// 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int one(0), two(0), four(0), five(0), seven(0), eight(0);

void deleteChar(std::string& lockPass, const int i)
{
    // swap, delete back
    std::swap(lockPass[i], lockPass[lockPass.size()-1]);
    lockPass.pop_back();
}
void DuHai(std::string& lockPass, int& sumAll)
{
    if(two !=0)
    {
        for (size_t i = 0; i < lockPass[i] != '\0'; i++)
        {
            if(lockPass[i] == '2')
            {
                deleteChar(lockPass,i); 
                two--;
                sumAll-=2;
                return;
            }
        }
    }
    else
    {
        if(five!=0)
        {
            for (size_t i = 0; i < lockPass[i] != '\0'; i++)
            {
                if(lockPass[i] == '5')
                {
                    deleteChar(lockPass,i);
                    five--;
                    sumAll-=5;
                    return;
                }
            }
        }
        else
        {
            for (size_t i = 0; i < lockPass[i] != '\0'; i++)
            {
                if(lockPass[i] == '8')
                {
                    deleteChar(lockPass,i);
                    eight--;
                    sumAll-=8;
                    return;
                }
            }
        }                
    }
}
void DuMot(std::string& lockPass, int& sumAll)
{
    if(one !=0)
        {
            for (size_t i = 0; i < lockPass[i] != '\0'; i++)
            {
                if(lockPass[i] == '1')
                {
                    deleteChar(lockPass,i);
                    one--;
                    sumAll-=1;
                    return;
                }
            }
        }
        else
        {
            if(four!=0)
            {
                for (size_t i = 0; i < lockPass[i] != '\0'; i++)
                {
                    if(lockPass[i] == '4')
                    {
                        deleteChar(lockPass,i);
                        sumAll-=4;
                        four--;
                        return;                
                    }
                }
            }
            else
            {
                for (size_t i = 0; i < lockPass[i] != '\0'; i++)
                {
                    if(lockPass[i] == '7')
                    {
                        deleteChar(lockPass,i);
                        sumAll-=7;
                        seven--;
                        return;                
                    }
                }
            }                
        }
    return;
}
void Modified(std::string& lockPass)
{
    int sumAll(0);     // tong chu so cua chuoi
    int tinhDu(0);    
    for (size_t i = 0; lockPass[i] != '\0'; i++)
    {   
        if(lockPass[i] == '1') one++;
        else if(lockPass[i] == '2') two++; 
        else if(lockPass[i] == '4') four++; 
        else if(lockPass[i] == '5') five++; 
        else if(lockPass[i] == '7') seven++; 
        else if(lockPass[i] == '8') eight++; 
        sumAll += lockPass[i]-48;
    }

    // chia cho 3 du 1 
    int duMot = one + four + seven;
    // chia cho 3 du 2 
    int duHai = two + five + eight;

    // tinh tong chia het cho 3 
    tinhDu = duMot + duHai*2;

    //  truong hop 2 so chia du 1 , 0 so chia du 2 : vd : 14
    if(duMot!=0 && duHai==0)
    {
        if((duMot == 1 || duMot ==2 ) && duHai==0)
        {
            while(duMot--)
            {
                DuMot(lockPass, sumAll);
            }
        }
        else if(sumAll %3 !=0)
        {
            do
            {
                DuMot(lockPass, sumAll);
            } while (sumAll%3 !=0) ;
        }
    }
    // truong hop 2 so chia du 2, 0 so chia du 1 : 44
    else if(duHai!=0 && duMot ==0)
    {

        if((duHai == 1 || duHai ==2 ) && duMot==0)
        {
            while(duHai--)
            {
                DuHai(lockPass, sumAll);
            }
        }
        else if(sumAll %3 !=0)
        {
            do
            {
                DuHai (lockPass, sumAll);
            } while (sumAll%3 !=0) ;
        }
    }
    else    // truong hop con lai 
    {
        if(tinhDu%2 == 0 && sumAll%3!=0)
        {
            DuMot(lockPass, sumAll);
            // DuHai(lockPass, sumAll);
        }
        else if (tinhDu%2 ==1 && sumAll%3 !=0) 
        {
            // DuMot(lockPass, sumAll);
            DuHai(lockPass, sumAll);
            
        }
    }
}
int main()
{
    std::string lockPass;
    std::getline(std::cin, lockPass);
    Modified(lockPass);
    std::sort(lockPass.begin(), lockPass.end(), std::greater<int>());
    for (auto &i : lockPass)
    {
        std::cout<< i ;
    }
}
