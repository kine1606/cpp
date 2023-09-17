#include <iostream>
using namespace std;
// bool checked(int n)
// {
//     while (n%2==0)
//     {
//         n/=2;
//     }
//     return (n==1);
// }
int deQuy2MuK(int n)
{
    if(n==2 || n==1) return 1;
    if (n%2!=0) return 0;
    return deQuy2MuK(n/2);
}
int main ()
{
    cout << "etner integer n=";
    int n;
    cin >> n;
    if (deQuy2MuK(n))
    {
        cout << "this is 2^k number";
    }
    else cout << "this is not 2^k number";
    return 0;
    // cout <<"this is ";
    // if (checked(n)) 
    // cout<<"";
    // else cout<<"not";
    // cout<< "2^k number";
}