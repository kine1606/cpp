#include <iostream>
#include <queue>
using namespace std;
struct people
{
    char ten[20];
    int tuoi;
    int chieucao;
    int cannang;
};
int main()
{
    people n1[5];
    for (size_t i = 0; i <5; i++)
    {
    cin >> n1[i].ten;
    cin.ignore();
    cin >> n1[i].tuoi;
       cin.ignore();
    cin>>n1[i].chieucao;
       cin.ignore();
    cin>>n1[i].cannang;
       cin.ignore();
    cout << n1[i].tuoi << " " << n1[i].chieucao << " " <<n1[i].cannang << " "<< n1[i].ten << '\n';
    }
    
    
}