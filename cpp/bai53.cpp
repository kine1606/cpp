//Hãy kiểm tra số nguyên dương n có phải là số đối xứng hay không?
// by Kine1606
#include <iostream>
#include <vector>
using namespace std;
bool checkSymmetrical (long int n)
{
    vector < int > checked;
    while (n!=0)
    {
        checked.push_back(n%10);
        n/=10;
    }
    int length= checked.size();
    int const length1= checked.size();
    int count(0);
    if (checked.size()%2==0)
    {
        cout << " n is not symmetrical";
    }
    else

    {
            for (int i = 0; i < length1; i++)
       {
             if (checked[i]==checked[length-1])
             {
                 length--;
                 count ++;
             }
              else 
             {
                  return 0;
             }
       }  
    }
    if ((count-1)%2==0)
    {
       return 1;
    }
    return 0;
}
int main()
{
    cout <<  " enter positive n=";
    long int n;
    cin >> n;
    if(checkSymmetrical(n))
    {
        cout << " n is symmetrical ";
    }
    
}