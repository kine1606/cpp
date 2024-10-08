#include <iostream>
#include <vector>
#include <map>
using namespace std;

int n, k;
vector<int> a;


vector<int> get_ans(const vector<int>& A, int K){
	map<int,int> Hash;
	std::vector <int> myVector;
    for (size_t i = 0; i < A.size(); i++)
    {
        Hash[A[i]]++;
    }
    for (auto i = Hash.begin(); i != Hash.end(); i++)
    {
        myVector.push_back(i->first);
        i->second--;
        if(myVector.size() == K) return myVector;
    }
    auto i = Hash.begin();
    while(myVector.size() < K)
    {
        if(i->second > 0)
        {
            myVector.push_back(i->first);
            i->second --;
        }
        else i++;
    }
    return myVector;
}

int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	
	cin >> n >> k;
	
	a.resize(n);
	for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = get_ans(a,k);
	
	for (const int& x: ans) cout << x << ' ';
	return 0;
}
