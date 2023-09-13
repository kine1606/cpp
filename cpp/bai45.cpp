//Hãy tìm chữ số đảo ngược của số nguyên dương n.
// by Kine1606
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << " enter positive n=";
    int n(0);
    cin >> n;
    vector <int> array1;
    while (n!=0)
    {
        array1.push_back(n%10);
        n/=10;
    }
    int length= sizeof(array1)/ sizeof(array1[0]);
    cout << " the reverse of n is ";
    for (int i = 0; i <length; i++)
    {
        cout << array1[i];
    }
    return 0;
}