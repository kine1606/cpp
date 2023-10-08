#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#define MAX 1000
using namespace std;
long int decimal_to_binary(int n)
{   
    if(n==0)
    {
        cout << 0;
        return 0;
    }
    int i(0);
    vector <int> array;
    while (n!=0)
    {   
        i=n%2;
        array.push_back(i);
        if (i==1)
        {
            n=(n-1)/2;
        }
        else n=n/2;
    }
    for (int i =0; i<size(array); i++)
    {
        cout << array[size(array)-i-1]; // xuất ngược 
    }
    return 1;
}
void binary_to_decimal()
{
    string binary ="       ";
    int coeff=binary.size()-1;
    int S(0);
    for (auto i : binary)
    {
        if (i=='1')
        {
            S+=pow(2,coeff);
        }
        coeff--;
    }
    cout << S;
    /************************************
    string number = "11110";
    vector <int> array;
    reverse(number.begin(),number.end());
    for (auto i : number)
    {   
        if (i==48) array.push_back(0);
        else    array.push_back(1);
    }
    int sum(0);
    for (int i = 0; i <5; i++)
    {
        sum+= array[i]*pow(2,i);
    }
    cout << sum;
    **************************************/
}

int main() {
    int n;
    cin >> n;
    decimal_to_binary(n); 
    binary_to_decimal();
    return 0;
}