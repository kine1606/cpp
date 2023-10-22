#include <iostream>
using namespace std;

int main()
{
    double FarenheitDegree;
    cin >> FarenheitDegree;
    cout << (FarenheitDegree-32)*5.0/9 << " ";
    cout << double((FarenheitDegree-32)/1.8) + 273.15;
    return 0;
} 