#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cmath>
void HelloWorld()
{
    std::cout << "Hello world!" << '\n';
}
void SimpleCalculate()
{
    int a,b;
    std::cin >> a >> b;
    std::cout << "a + b = " << a+b << '\n';
    std::cout << "a - b = " << a-b << '\n';
    std::cout << "a * b = " << a*b << '\n';
    std::cout << "a / b = " << std::setprecision(5) << a*1.0/b << '\n';
    std::cout << "a % b = " << a%b << '\n';
}
long long MaxInArray()
{
    int n;
    srand(time(NULL));
    std::cout << "Enter n:";
    std::cin >> n;
    int *p= new int[n];
    std::cout << "array : " ;
    for (size_t i = 0; i <n; i++)
    {
        p[i]=rand();
        std::cout << p[i] << " ";
    }
    int max=p[0];
    for (size_t i = 1; i <n; i++)
    {   
        if (max<p[i])
        {
            max=p[i];
        }
    }
    return max;
}
int sumOfDigits()
{
    unsigned int n(0);
    std::cout << "Enter digit:" ;
    std::cin >> n;
    int sum(0);
    while (n!=0)
    {   
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void swapPosition()
{
    int a,b;
    std::cin >> a >> b;
    int temp(0);
    temp=a;
    a=b;
    b=temp;
    std::cout << a << "  " << b ;
}
bool CheckPrime(unsigned &number)
{
    if(number<2) return false;
    else
    {
        for (size_t i = 2; i <= sqrt(number); i++)
        {
            if(number%i==0) return false;
        }
    }
    return true;
}
void isPrime()
{
    unsigned int number;
    std::cout << "enter number:";
    std::cin >> number;
    if(CheckPrime(number))
    {
        std::cout << "Prime!";
    }
    else 
    {
        std::cout << "Not Prime!";
    }
    std::cout << '\n';
}
int reverseNumber()
{
    unsigned int n;
    std::cout << "Enter Number: ";
    std::cin >> n;
    unsigned int Copy = n;
    int count(0);
    int ReverseNumber(0);
    while (Copy!=0)
    {
        count++;
        Copy/=10;
    }
    while (n!=0)
    {
        count--;
        ReverseNumber+=(n%10)*pow(10,count);
        n/=10;
    }
    return ReverseNumber;
}
void factorial()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;
    int fact(1);
    for (size_t i = 1; i <=n; i++)
    {
        fact*=i;
    }
    std::cout <<"factorial of " << n << " is << " << fact << '\n';
}
struct homNayToiBuon
{
    std::string name;
    int age;
};
void aboutStruct()
{
    unsigned int number;
    std::cout << "Enter number: ";
    std::cin >> number;
    homNayToiBuon *ptr = new homNayToiBuon[number];
    for (size_t i = 0; i < number; i++)
    {
        std::cout<<"enter name: " <<'\n';
        std::cin.ignore();
        std::getline(std::cin, ptr[i].name);
        std::cout<<"enter age: " <<'\n';
        std::cin >> ptr[i].age;
    }
    for (size_t i = 0; i < number; i++)
    {
        std::cout << ptr[i].name << " " << ptr[i].age << '\n';
        std::cout << " =======================";
    }
}



int main()
{
    // HelloWorld();
    // SimpleCalculate();
    // long long max = MaxInArray();
    // std::cout << "Largest number in array is " << max << '\n';
    // std::cout << "Sum of given digit is " << sumOfDigits() << '\n';
    // swapPosition();
    //isPrime();
    //std::cout << reverseNumber() << '\n';
    //factorial();
    // aboutStruct();
}