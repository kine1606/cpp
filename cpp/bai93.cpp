//In ra tam giác cân có độ cao h
// by Kine1606
#include <iostream>
using namespace std;
void PST(int h)    // print square triangle
{
    for (int i = 1; i <=h; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
    cout << '\n';
    return;
}
void PS (int h)    // print square 
{
    for (int i = 1; i <=h; i++)
    {
        for (int j= 1; j<=h; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    cout << '\n';
    return;
}
void PSTE(int h)    // prine square triangle emtpy inside
{   
    cout << "*\n";
    for (int i = 1; i <h-1; i++)
    {
        for (int j = 1; j<=i; j++)
        {   
            if (j==1)   cout << "* ";
            if (j!=i)   cout << "  ";
            else        cout << "* ";
        }
        cout << "\n";
    }
    for (int i = 1; i <=h; i++)
    {
        cout << "* ";
    }
    cout << '\n';
    return;
}
void PSE (int h)
{
    for (int i = 1; i <=h; i++)
    {
        cout << "* ";
    }
    cout << '\n';
    for (int i = 1; i <=h-2; i++)
    {   
        cout << "* ";
        for (int j = 1; j <=h-2; j++)
        {
           cout << "  ";
        }
        cout << "*\n";
    }
    for (int i = 1; i <=h; i++)
    {
        cout << "* ";
    }
    cout << '\n';
    return; 
}
void PRSTE(int h)
{
    for (int i = 2; i <=h; i++)
    {
        cout << "  ";
        if (i==h) cout << "*\n";
    }
    int count(1);
    for (int i = 1; i < h-1; i++)
    {
        count++;            // hàng thứ i sẽ có dấu sao ở cuối và 1 dấu sao ở h+1-count 
        for (int j = 1; j<=h; j++)
        {
            if (j==h+1-count) cout <<"* ";
            else cout << "  ";
            if (j==h-1) cout << "*";
        }
        cout << '\n';
    }
    for (int i = 1; i <=h; i++)
    {
        cout << "* ";
    }
}
int main()
{
    unsigned int h;
    cout << "enter h=";
    cin >> h;
    PST(h); PS(h); PSTE(h); PSE(h); PRSTE(h);
    return 0;   
}
