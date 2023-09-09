// Kine1606
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int listdivisor(int n)
{
    int sum(0);
    unsigned int count(0);
    vector <int> divisorNumber;
    cout << "all divisors of n is ";
    divisorNumber.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout << i << " ";
            divisorNumber.push_back(i);
            count ++;
        }
        else
        {
        divisorNumber.push_back(0);
        }
        sum+=divisorNumber[i];
    }
    cout << '\n';
    cout << "sum all divisor numbers =" << sum<< '\n';
    cout << "there are " << count << " divisor(s)" << '\n';
    return 0;
}
int multiple (int n)
{
    cout << "multiple all divisor numbers equal to ";
    int multiple(1);
    vector <int > divisorNumbers;
    divisorNumbers.push_back(1);
    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            divisorNumbers.push_back(i);
        }
        else divisorNumbers.push_back(1);
        multiple=multiple*divisorNumbers[i];
    }
    cout << multiple << '\n';
    return 0;
}
int evenNumber(int n)
{
    cout << "even divisor numbers of n are ";
    for (size_t i = 2; i <=n; i+=2)
    {
        if (n%i==0)
        {
         cout << i << " ";
        }
        
    }
    cout << '\n';
return 0;    
}
int oddNumber(int n)
{
    cout << "odd divisor numbers of n are ";
    for (int i = 1; i <=n; i+=2)
    {
        if (n%i==0)
        {
            cout << i << " ";
        }
    }
    cout << '\n';
    return 0;
}
int isPrime(int n )
{
    int count(0);
    for (int  i =2; i <n; i++)
    {
        if (n%i==0)
        {
          count ++;
        }
        
    }
    if (count)
    {
        cout << n << " is not a prime number \n";
    }
    else cout << n <<  " is a prime number \n";
    return 0;
}
int squareNumber (int n)
{
    int count(0);
    for (int i = 1; i <n/2; i++)
    {
     if (sqrt(n)==i*i)
     {
        count++;
     }
    }
    if (count)
    {
       cout << n<<" is a square number \n";
    }
    else cout << n << " is not a square number \n";
    return 0;
}
int theLargestOddDNumber(int n)
{
  cout << "the largest odd divisor number of n is ";
  vector <int> oddNumber;
  oddNumber.push_back(0);
  for (int i = 1; i <=n; i+=2)
  {
    if (n%i==0)
    {
        oddNumber.push_back(i);
    } 
  }
  cout << oddNumber.back();
  cout << '\n';
  return 0;
}
int perfectNumber(int n)
{
    int sum(0);
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
        else sum+=0;
    }
    if (sum==n)
    {
        cout<< n << " is the perfect number \n";
    }
    else
        cout << n << " is not the perfect number \n";
    return 0;
    
}
int main()
{
    cout << " enter positive number n=";
    int n(0);
    cin>> n;
    listdivisor(n);
    multiple(n);
    evenNumber(n);
    oddNumber(n);   
    isPrime(n);
    squareNumber(n);
    theLargestOddDNumber(n);
    perfectNumber(n);
    return 0;
}