#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void fromDECtoRest()
{
    int decimal;
    vector <int> array;
    cout << "enter decimal: ";
    cin >> decimal;
    cout << "HEX is :" << hex << decimal << '\n';
    cout << "OCT is :" << oct << decimal << '\n';
    cout << "BIN is :" ;
    while (decimal!=0)
    {
        if (decimal%2==0)
        {
            array.push_back(0);
        }
        else array.push_back(1);
        decimal/=2;
    }
    for (int i = size(array)-1; i >=0; i--)
    {
        cout << array[i];
    }
    cout << '\n';
}
void fromOCTtoRest()
{
    int octal;
    vector <int> array;
    cout << "enter Octal: ";
    cin >> oct >> octal;
    cout << "HEX is: " << hex << octal << '\n';
    cout << "DEC is: " << dec << octal << '\n';
    cout << "BIN is: " ;
    while (octal!=0)
    {
        if (octal%2==0)
        {
            array.push_back(0);
        }
        else array.push_back(1);
        octal/=2;
    }
    for (int i = size(array)-1; i >=0; i--)
    {
        cout << array[i];
    }
    cout << '\n';
}
void fromHEXtoRest()
{
    int hexadecimal;
    vector <int> array;
    cout << "enter hexadecimal: ";
    cin >> hex >>hexadecimal;  // chuyển từ hệ 10 nhập từ bàn phím sang hệ 16;
    // từ hệ 16 đổi về hệ 10 8 2;
    cout << "DEC is: " << dec << hexadecimal << '\n';
    cout << "OCT is: " << oct << hexadecimal << '\n';
    cout << "BIN is: " ;
    while (hexadecimal!=0)
    {
        if (hexadecimal%2==0)
        {
            array.push_back(0);
        }
        else array.push_back(1);
        hexadecimal/=2;
    }
    for (int i = size(array)-1; i >=0; i--)
    {
        cout << array[i];
    }
    cout << '\n';
}
void fromBINtoRest()
{
    long int binary;
    long int binary1=binary;
    cout << "enter binary: ";
    cin >> binary;
    while (binary1!=0)
    {
        binary1/=10;
    }
    int sum(0);
    int level(0);
    while (binary!=0)
    {
        if (binary%10==1)
        {
            sum+=pow(2,level);
        }
        level++;
        binary/=10;
    }
    cout << "DEC is: " << sum << '\n';
    cout << "HEX is: " << hex << sum << '\n';
    cout << "OCT is: " << oct << sum ;
}
int main()
{
    fromBINtoRest();
    cin.ignore();
    fromOCTtoRest();
    cin.ignore();
    fromDECtoRest();
    cin.ignore();
    fromHEXtoRest();
    return 0;
}