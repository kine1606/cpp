/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
std
###End banned keyword*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void merge(int *a, int n, int* b, int m, int*& c)
{
    int n_index(0), m_index(0);
    int c_index(0);
    while(n_index < n && m_index < m)
    {
        if(a[n_index] < b[m_index])
        {
            c[c_index] = a[n_index];
            c_index++;
            n_index++;
        } 
        else
        {
            c[c_index] = b[m_index];
            c_index++;
            m_index++;
        }
    }
    while(n_index < n)
    {
        c[c_index] = a[n_index++];
        c_index++;
    }
    while(m_index < m)
    {
    
        c[c_index] = b[m_index++];
        c_index++;
    }
}
int main (){
    cin.tie(0);
    std::ios::sync_with_stdio(false);
    int n, m;
    int t; cin >> t;
    while (cin >> n >> m || t > 0)
    { 
        t--;
        int *a = new int [n], *b = new int[m], *c = new int[n+m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

	merge(a, n, b, m, c);
	int nc = n + m;;
        for(int i = 0; i < nc; i++){
            cout << c[i] << " ";
        }
        delete c;
        cout << endl;
    }
}
