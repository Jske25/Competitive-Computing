#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        for (int i = 3; i <= n+2; i++) {
            vector<int> v;

            for (int x = 3; x <= n; x++) {
                if (i == x) {
                    v.push_back(2);
                }
                v.push_back(x);
            }
            if (i == n+1) {
                v.push_back(2);
                v.push_back(1);
            }
            else if (i == n+2) {
                v.push_back(1);
                v.push_back(2);
            }
            else {
                v.push_back(1);
            }
            for (int x = 0; x < v.size(); x++) {
                cout << v[x] << " ";
            }
            cout << endl;
        }
    }
    
}
