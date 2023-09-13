#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
int main()
{
    srand(time(NULL));
    vector<int> array;
    cout << "enter number of elements of array n=";
    long int n ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        array.push_back(rand());
        cout << array[i] << " ";
    }
    int count(0);
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (array[i]>array[j] && i<j)
            {
                count++;
            }
        }
        
    }
    cout << " \n";
    cout << "there (is) are" << count << "  inversion(s)";
}