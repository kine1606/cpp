#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) 
{
    return __gcd(a, b);   // UCLN của 2 số 
}

int eval(vector<int> v, int k) {
    v.erase(v.begin()+k);
    if (v.size() == 1) 
    {
        return v[0];            // trả về 0 nếu n=1
    } else if (v.size() == 2) 
    {
        return gcd(v[0], v[1]);     // n=2;
    }
     //n>2 
    int ans = gcd(v[0], v[1]);  // UCLN của 2 số 
    for (int i = 2; i < v.size(); i++) 
    {
        ans = gcd(ans, v[i]);
    }
    return ans;
}

int main() 
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        cin.ignore();
    }

    int ans = 0;   // UCLN (0);
    int pos = 0;   // vị trí trong mảng 
    for (int i = 0; i < n; ++i) 
    {
        int e = eval(v, i);   // trả e= ans
        if (e > ans) 
        {
            pos = i;  // phần tử thứ i
            ans = e;  // trả về UCLN của 2 số 
        }
    }
    cout << v[pos] << " " << ans;
}