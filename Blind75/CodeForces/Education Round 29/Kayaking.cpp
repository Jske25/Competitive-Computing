#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(2*n);
    int max = INT32_MAX;
    int sum = 0;
    for (int x = 0; x < 2*n; x++) {
        cin >> v[x];
    }
    sort(v.begin(), v.end());
    for (int x = 0; x < 2*n; x++) {
        for (int i = x+1; i < 2*n; i++) {
            vector<int> d = v;
            d.erase(d.begin()+i);
            d.erase(d.begin()+x);
            int sum = 0;
            for (int z = 0; z < d.size(); z+=2) {
                sum = sum + abs(d.at(z)-d.at(z+1));
            }
            max = min(max, sum);
        }
    }
    cout << max << endl;
}
