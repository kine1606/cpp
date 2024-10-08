#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& vec, int data) {
    return lower_bound(vec.begin(), vec.end(), data) - vec.begin();
}

void Processing() {
    vector<int> vec;
    vector<int> results;
    int t, p;

    while (cin >> t && t != 0) {
        cin >> p;
        if (t == 1) {
            auto it = lower_bound(vec.begin(), vec.end(), p);
            if (it == vec.end() || *it != p) {
                vec.insert(it, p);
            }
        } else {
            int pos = binarySearch(vec, p);
            results.push_back(pos < vec.size() && vec[pos] == p ? pos + 1 : 0);
        }
    }

    for (int result : results) {
        cout << result << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Processing();
    return 0;
}
