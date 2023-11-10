// tìm số cách sao cho 4 số k âm a,b,c,d 
// a*b+c*d=n 
#include <iostream>
int foundWays(unsigned int number)
{
    if(number%2==0) return number*2;
    else return (number-1)*2;
}
int main()
{
    unsigned int number;
    std::cin >> number;
    std::cout << foundWays(number) <<  " cach";
    return 0;
}