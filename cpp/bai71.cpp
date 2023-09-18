//  Nhập hai số thực, kiểm tra xem chúng có cùng dấu hay không?
// by Kine1606
#include <iostream>
using namespace std;
int main()
{
    long int number1,number2;
    cout<< "enter number1 and number2= ";
    cin>> number1 >> number2;
    (number1*number2<0) ? cout << "they aren't same side" : cout << "they are same side";
    return 0;
}